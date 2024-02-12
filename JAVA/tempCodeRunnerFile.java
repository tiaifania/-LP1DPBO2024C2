System.out.println("Anggota DPR : ");
            System.out.println("+-----+------------+----------+------------+");
            System.out.println("| ID  | Nama       | Bidang   | Partai     |");
            System.out.println("+-----+------------+----------+------------+");
            for (int i = 0; i < list.size(); i++) {
                System.out.printf("| %-3s | %-10s | %-8s | %-10s |%n",
                        list.get(i).getId(), list.get(i).getName(), list.get(i).getBidang(), list.get(i).getPartai());
            }
            System.out.println("+-----+------------+----------+------------+");