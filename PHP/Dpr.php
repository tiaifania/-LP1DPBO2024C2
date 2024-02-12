<?php

class AnggotaDPR {
    private $id;
    private $nama;
    private $bidang;
    private $partai;
    private $fotoProfil;

    public function __construct($id, $nama, $bidang, $partai, $fotoProfil) {
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->fotoProfil = $fotoProfil;
    }

    public function getId() {
        return $this->id;
    }

    public function getNama() {
        return $this->nama;
    }

    public function getBidang() {
        return $this->bidang;
    }

    public function getPartai() {
        return $this->partai;
    }

    public function getFotoProfil() {
        return $this->fotoProfil;
    }

    // Tambahan setter jika diperlukan
    public function setNama($nama) {
        $this->nama = $nama;
    }

    public function setBidang($bidang) {
        $this->bidang = $bidang;
    }

    public function setPartai($partai) {
        $this->partai = $partai;
    }

    public function setFotoProfil($fotoProfil) {
        $this->fotoProfil = $fotoProfil;
    }
}

class DaftarAnggotaDPR {
    private $anggotaList = [];

    public function tambahAnggota($anggota) {
        $this->anggotaList[] = $anggota;
    }

    public function hapusAnggota($id) {
        foreach ($this->anggotaList as $key => $anggota) {
            if ($anggota->getId() == $id) {
                unset($this->anggotaList[$key]);
                break;
            }
        }
    }

    public function ubahAnggota($id, $anggotaBaru) {
        foreach ($this->anggotaList as $key => $anggota) {
            if ($anggota->getId() == $id) {
                $this->anggotaList[$key] = $anggotaBaru;
                break;
            }
        }
    }

    public function tampilkanDaftar() {
        echo "<table>
            <tr>
                <th>ID</th>
                <th>Nama</th>
                <th>Bidang</th>
                <th>Partai</th>
                <th>Foto Profil</th>
            </tr>";
        foreach ($this->anggotaList as $anggota) {
            echo "<tr>";
            echo "<td>" . $anggota->getId() . "</td>";
            echo "<td>" . $anggota->getNama() . "</td>";
            echo "<td>" . $anggota->getBidang() . "</td>";
            echo "<td>" . $anggota->getPartai() . "</td>";
            echo "<td><img src='" . $anggota->getFotoProfil() . "'alt='foto profil'></td>";
            echo "</tr>";
        }
        echo "</table>";
    }
}
?>
