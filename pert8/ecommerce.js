const readline = require('readline');

const pengguna = [];
const produk = [
  { id: 1, nama: 'Laptop', harga: 10000000 },
  { id: 2, nama: 'Smartphone', harga: 5000000 }
];
let penggunaSaatIni = null;
let keranjang = [];

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function daftarPengguna() {
  rl.question('Masukkan nama pengguna: ', (namaPengguna) => {
    rl.question('Masukkan kata sandi: ', (kataSandi) => {
      pengguna.push({ namaPengguna, kataSandi });
      console.log('Pengguna berhasil terdaftar!');
      menuUtama();
    });
  });
}

function masukPengguna() {
  rl.question('Masukkan nama pengguna: ', (namaPengguna) => {
    rl.question('Masukkan kata sandi: ', (kataSandi) => {
      const user = pengguna.find(u => u.namaPengguna === namaPengguna && u.kataSandi === kataSandi);
      if (user) {
        penggunaSaatIni = user;
        console.log('Berhasil masuk!');
        menuPengguna();
      } else {
        console.log('Nama pengguna atau kata sandi salah.');
        menuUtama();
      }
    });
  });
}

function lihatProduk() {
  console.log('Produk yang tersedia:');
  produk.forEach(p => console.log(`${p.id}. ${p.nama} - Rp${p.harga}`));
  menuPengguna();
}

function tambahKeKeranjang() {
  rl.question('Masukkan ID produk untuk ditambahkan ke keranjang: ', (productId) => {
    const product = produk.find(p => p.id == productId);
    if (product) {
      keranjang.push(product);
      console.log(`${product.nama} ditambahkan ke keranjang.`);
    } else {
      console.log('ID produk tidak valid.');
    }
    menuPengguna();
  });
}

function checkout() {
  if (keranjang.length === 0) {
    console.log('Keranjang Anda kosong.');
  } else {
    console.log('Keranjang Anda:');
    keranjang.forEach(p => console.log(`${p.nama} - Rp${p.harga}`));
    const total = keranjang.reduce((sum, p) => sum + p.harga, 0);
    console.log(`Total: Rp${total}`);
  }
  keranjang = [];
  menuPengguna();
}

function menuUtama() {
  console.log('\n1. Daftar');
  console.log('2. Masuk');
  console.log('3. Keluar');
  rl.question('Pilih opsi: ', (option) => {
    switch (option) {
      case '1':
        daftarPengguna();
        break;
      case '2':
        masukPengguna();
        break;
      case '3':
        rl.close();
        break;
      default:
        console.log('Opsi tidak valid.');
        menuUtama();
    }
  });
}

function menuPengguna() {
  if (!penggunaSaatIni) {
    menuUtama();
    return;
  }
  console.log('\n1. Lihat Produk');
  console.log('2. Tambah ke Keranjang');
  console.log('3. Checkout');
  console.log('4. Logout');
  rl.question('Pilih opsi: ', (option) => {
    switch (option) {
      case '1':
        lihatProduk();
        break;
      case '2':
        tambahKeKeranjang();
        break;
      case '3':
        checkout();
        break;
      case '4':
        penggunaSaatIni = null;
        menuUtama();
        break;
      default:
        console.log('Opsi tidak valid.');
        menuPengguna();
    }
  });
}

menuUtama();