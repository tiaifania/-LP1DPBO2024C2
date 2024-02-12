<?php
require('Dpr.php');
// Contoh penggunaan
$daftarAnggota = new DaftarAnggotaDPR();

// Menambahkan beberapa anggota contoh
$daftarAnggota->tambahAnggota(new AnggotaDPR(1, "John Doe", "Pendidikan", "Partai A", "2.png"));
$daftarAnggota->tambahAnggota(new AnggotaDPR(2, "Jane Smith", "Kesehatan", "Partai B", "1.png"));

// Menampilkan daftar
echo "<h2>menampilkan list</h2>";
$daftarAnggota->tampilkanDaftar();

// Menambahkan anggota baru
echo "<h2>menambah anggota baru</h2>";
$daftarAnggota->tambahAnggota(new AnggotaDPR(3, "Mark Johnson", "Pertanian", "Partai C", "4.png"));
$daftarAnggota->tampilkanDaftar();

// Mengubah anggota
echo "<h2>mensunting anggota yang sudah ada</h2>";
$daftarAnggota->ubahAnggota(1, new AnggotaDPR(1, "John Doe Updated", "Pendidikan", "Partai D", "3.png"));
$daftarAnggota->tampilkanDaftar();

// Menghapus anggota
echo "<h2>menghapus anggota yang sudah ada</h2>";
$daftarAnggota->hapusAnggota(2);
$daftarAnggota->tampilkanDaftar();

?>
