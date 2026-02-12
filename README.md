EISD SELECTION TASK
soal non coding
1.  Ada peserta yang panik karena halaman sempat loading lama, lalu
menekan tombol Daftar berkali-kali yang mengakibatkan data
masuk lebih dari sekali

jawaban = Masalah data masuk lebih dari sekali terjadi karena saat halaman mengalami loading lama, peserta menjadi panik lalu menekan tombol Daftar berkali-kali. Setiap kali tombol ditekan, browser mengirim permintaan (request) baru ke server. Karena server belum sempat memberikan respons dari permintaan pertama, semua request tersebut dianggap sebagai pendaftaran yang berbeda dan akhirnya seluruhnya masuk ke database, meskipun datanya sama dan waktunya sangat berdekatan.

Untuk mencegah hal ini, sistem perlu memiliki mekanisme pembatasan di sisi backend, misalnya dengan memastikan hanya satu proses pendaftaran yang dapat berjalan dalam satu waktu untuk satu peserta. Dengan begitu, ketika satu request sedang diproses, request berikutnya akan ditolak atau diabaikan. Cara ini memastikan bahwa meskipun tombol Daftar ditekan berkali-kali, hanya satu data yang benar-benar disimpan.

Perbaikan ini penting karena langsung menjaga keakuratan data, mengurangi duplikasi, dan membuat hasil pendaftaran lebih rapi serta dapat dipercaya oleh panitia.

2. Ada yang mengisi asal: nama “.”, email “aaa”, atau bahkan
mengosongkan form mengakibatkan data berantakan.

jawaban = Untuk mencegah data berantakan akibat pengisian asal, sistem perlu memiliki aturan format input yang jelas. Setiap field wajib diisi dan hanya menerima data dengan format yang sesuai.

Pada kolom nama, input harus memiliki panjang minimum, misalnya minimal 3 karakter dan hanya berisi huruf serta spasi, sehingga input seperti “.” atau satu huruf dapat ditolak. Sistem juga bisa menampilkan contoh di kolom isian seperti “Contoh: Adam Nugraha” agar pengguna tahu format yang benar.

Pada kolom email, sistem harus memastikan format email valid, yaitu mengandung tanda “@” dan domain, sehingga input seperti “aaa” tidak dapat diterima. Contoh yang ditampilkan bisa berupa “Contoh: nama@email.com
”.

Untuk pilihan kelas, pengguna hanya bisa memilih dari daftar kelas yang tersedia, bukan mengisi secara bebas. Jika ada data yang tidak sesuai, sistem langsung menampilkan peringatan dan menonaktifkan tombol submit sampai seluruh data valid. Dengan cara ini, hanya data yang rapi dan dapat dipertanggungjawabkan yang akan masuk ke database.

3. Di akhir hari, beberapa kelas yang kuotanya 25 orang ternyata terisi
30+ karena sistem tetap menerima pendaftaran 

jawaban = Intinya, sistem perlu memiliki aturan batas maksimal peserta untuk setiap kelas. Jika jumlah pendaftar sudah mencapai kuota yang ditentukan, misalnya 25 orang, maka sistem secara otomatis menolak pendaftaran berikutnya untuk kelas tersebut. Peserta akan diberi informasi bahwa kelas sudah penuh dan diminta memilih kelas lain yang masih tersedia.

Dengan mekanisme ini, sistem tidak lagi menerima pendaftaran secara berlebihan dan jumlah peserta di setiap kelas tetap sesuai dengan kuota yang telah ditentukan oleh panitia.

4. Saat panitia mau rekap, muncul pertanyaan: “Kalau data dobel dan
data tidak valid begini, mana yang dianggap resmi?”

jawaban = Data resmi adalah data yang valid sesuai aturan sistem dan tidak terduplikasi. Jika ditemukan data ganda, maka hanya satu data yang dipertahankan, sementara data yang tidak valid atau duplikat tidak digunakan dalam proses rekap. dan jika ada data yg double maka data yg pertama yg akan rekap 

Jawaban Gabungan (Final & Rapi)

Beberapa masalah yang terjadi pada hari pertama pendaftaran menunjukkan bahwa sistem belum memiliki kontrol data yang memadai. Salah satu masalah utama adalah data masuk lebih dari sekali akibat halaman yang loading lama. Saat peserta panik dan menekan tombol Daftar berkali-kali, browser mengirim beberapa permintaan ke server dalam waktu yang sangat berdekatan. Karena server belum sempat memberikan respons dari permintaan pertama, seluruh request tersebut dianggap sebagai pendaftaran baru dan akhirnya semuanya tersimpan di database, meskipun datanya sama.

Untuk mencegah hal ini, sistem perlu memiliki mekanisme pembatasan di sisi backend, yaitu memastikan hanya satu proses pendaftaran yang dapat berjalan dalam satu waktu untuk satu peserta. Dengan begitu, ketika satu request sedang diproses, request berikutnya akan ditolak atau diabaikan, sehingga hanya satu data yang benar-benar tersimpan. Perbaikan ini penting untuk menjaga keakuratan data dan mencegah duplikasi.

Selain itu, masalah data berantakan juga terjadi karena tidak adanya aturan format input yang jelas. Peserta dapat mengisi data secara asal, seperti nama hanya berisi “.”, email dengan format tidak valid seperti “aaa”, atau bahkan mengosongkan form. Untuk mengatasinya, setiap field harus bersifat wajib dan hanya menerima data dengan format yang sesuai. Misalnya, kolom nama harus memiliki panjang minimum, seperti minimal tiga karakter dan hanya berisi huruf serta spasi. Kolom email harus mengikuti format email yang benar dengan adanya tanda “@” dan domain. Sistem juga dapat menampilkan contoh input seperti “Contoh: Adam Nugraha” atau “Contoh: nama@email.com
” sebagai panduan bagi pengguna. Jika data tidak sesuai, sistem menampilkan peringatan dan menonaktifkan tombol submit hingga seluruh data valid.

Masalah lain yang muncul adalah jumlah peserta dalam kelas yang melebihi kuota. Hal ini terjadi karena sistem tetap menerima pendaftaran tanpa mengecek kapasitas kelas. Untuk mencegahnya, sistem perlu menetapkan batas maksimal peserta, misalnya 25 orang per kelas. Jika kuota sudah terpenuhi, pendaftaran berikutnya otomatis ditolak dan peserta diminta memilih kelas lain yang masih tersedia. Dengan mekanisme ini, jumlah peserta di setiap kelas tetap terkontrol.

Terakhir, untuk menjawab pertanyaan panitia terkait data mana yang dianggap resmi, data yang digunakan seharusnya adalah data yang valid sesuai aturan sistem dan tidak terduplikasi. Jika ditemukan data ganda, maka hanya satu data yang dipertahankan, yaitu data yang pertama kali masuk dan lolos validasi, sedangkan data yang tidak valid atau duplikat tidak digunakan dalam proses rekap. Dengan aturan ini, panitia memiliki acuan yang jelas dan data pendaftaran menjadi lebih rapi serta dapat dipertanggungjawabkan.
