
import java.util.Scanner;
import java.util.ArrayList;

public class DprMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Dpr> list = new ArrayList<>();

        int a = 0;
        do {
            System.out.println("Pilihan proses : \n");
            System.out.println("1. Tambah\n 2. Hapus\n 3. Sunting\n 4. Selesai\n");
            a = sc.nextInt();

            switch (a) {
                case 1:
                    System.out.print("Masukkan ID, Nama, Bidang, Partai: ");
                    String id = sc.next();
                    String name = sc.next();
                    String bidang = sc.next();
                    String partai = sc.next();
                    Dpr temp1 = new Dpr();
                    temp1.setId(id); temp1.setName(name); temp1.setBidang(bidang); temp1.setPartai(partai);
                    list.add(temp1);
                    break;
                case 2:
                    System.out.print("Masukkan ID anggota yang ingin dihapus: ");
                    String idHapus = sc.next();
                    for (int o = list.size() - 1; o >= 0; o--) {
                        if (list.get(o).getId().equals(idHapus)) {
                            list.remove(o);
                        }
                    }
                    break;
                case 3:
                    System.out.print("Masukkan ID anggota yang ingin disunting: ");
                    String idSunting = sc.next();
                    for (int j = 0; j < list.size(); j++) {
                        if (list.get(j).getId().equals(idSunting)) {
                            System.out.print("Masukkan Nama, Bidang, Partai baru: ");
                            name = sc.next();
                            bidang = sc.next();
                            partai = sc.next();
                            Dpr temp2 = new Dpr();
                            temp2.setId(idSunting);temp2.setName(name); temp2.setBidang(bidang); temp2.setPartai(partai);
                            list.set(j, temp2);
                            break;
                        }
                    }
                    break;
                case 4:
                    break;
                default:
                    System.out.println("Pilihan tidak valid.");
            }

            System.out.println("Anggota DPR : ");
            System.out.println("+-----+------------+----------+------------+");
            System.out.println("| ID  | Nama       | Bidang   | Partai     |");
            System.out.println("+-----+------------+----------+------------+");
            for (int i = 0; i < list.size(); i++) {
                System.out.printf("| %-3s | %-10s | %-8s | %-10s |%n",
                        list.get(i).getId(), list.get(i).getName(), list.get(i).getBidang(), list.get(i).getPartai());
            }
            System.out.println("+-----+------------+----------+------------+");
        } while (a != 4);

        sc.close();
    }
}


