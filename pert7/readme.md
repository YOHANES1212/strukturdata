```php
yang sudah selesai copy semua file dan buat folder di pert7
masuk ke dalam folder pert7 
ketikkan docker compose up -d --build
jangan lupa nyalakan dulu dockernya
```

```php
untuk eksekusi container ketikkan docker exec -it strukdat bash
create project --prefer-dist raugadh/fila-starter .
edit file .env di src selesai save
menjadi seperti ini
LINE 1 APP_NAME="Struktur Data"
LINE 5,6,7 
APP_TIMEZONE='Asia/Jakarta'
APP_URL=http://localhost
ASSET_URL=http://localhost

LINE 29,31,33
DB_HOST=dbstrukdat
DB_DATABASE=strukdat
DB_PASSWORD=p455w0rd
```

```php
terus lanjutkan php artisan migrate
php artisan project:init
chmod 777 -R storage/*
chmod 777 -R bootstrap/*
php artisan storage:link
setelah itu buka browser dan ketikkan http://localhost/admin
user login : admin@admin.com
password : password
```
```php
php artisan make:model Book -ms

buka di vscode cari folder database
cari folder migration di dalam database lihat paling Bawah (create_book)
tambahkan ini di line 16 (antara $table->id() $table->timestamps())
$table->string('name');
$table->string('code_book');
$table->decimal('price', 10,2);
```
```php
setelah itu simpan
buka lagi folder database cari folder seeder cari file dengan BookSeeder.php
di line 16 isikan (//)
Book::firstOrCreate([
            'name' => 'Jungle Land',
            'code_book' => '123',
            'price' => 10
        ]);

di line 5 tambahkan use App\Models\Book;

setelah itu save
```
```php
setelah itu cari folder app cari folder Models didalam app tersebut
cari file Book.php
di line 9 tambahkan
protected $table = 'books';
    protected $fillable = [
        'name',
        'price',
        'code_book',
    ];

terus balik ke terminal(container docker exec)
```
```php
ketikkan php artisan migrate
php artisan project:init
php artisan make:filament-resource Book --generate
```

```php
kalau koneksi time out Waktu create project hapus semua nya
rm -rf .*
rm -rf *
```


```php
yang wsl nya abis di whoami masih user
ketikkan di terminal

nano /etc/wsl.conf
```

```php
untuk matikan bisa lakukan
➜  ~ cd perkuliahan/struktur_data
➜  struktur_data git:(main) cd pert7
➜  pert7 git:(main) docker compose down
[+] Running 4/4
 ✔ Container nginx_strukdat  Removed                                                              0.9s
 ✔ Container strukdat        Removed                                                              0.7s
 ✔ Container dbstrukdat      Removed                                                              2.8s
 ✔ Network esgul_default     Removed                                                              0.8s
➜  pert7 git:(main)                            
```