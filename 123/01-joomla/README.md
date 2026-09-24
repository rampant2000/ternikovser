# 01. Joomla + MariaDB

Развёртывание Joomla CMS с базой данных MariaDB через Docker Compose.

## Задание

Источник: [content/Docker/DockerCompose/joomla.md](https://gitflic.ru/project/rurewa/mfua/blob?file=content/Docker/DockerCompose/joomla.md&branch=master)

## Что сделано

- Создан `compose.yaml` с двумя сервисами:
  - **db** — MariaDB 11.5.2, volume `db_data`, БД `joomla_db`
  - **joomla** — Joomla latest, порт `8082:80`, volume `joomla_data`
- Оба сервиса в общей сети `joomla-network`
- Проект запущен: `docker compose up -d`
- Пройден веб-мастер установки Joomla
- Удалена папка `installation` после установки

## Команды

```bash
docker compose ls
docker compose up -d
docker compose ps -a
docker compose logs -f joomla
docker compose logs db
docker compose config
docker compose stop
docker compose start
docker compose restart
docker compose down -v
```

## Доступ

- Сайт: http://localhost:8082
- Админка: http://localhost:8082/administrator

## Скриншоты

### 1. Мастер установки Joomla
![Мастер установки](screenshots/Снимок экрана ЖАМА 1 2026-09-17 105029.png)

### 2. Установщик Joomla
![Установщик](screenshots/Снимок экрана жама 2 2026-09-17 105436.png)

### 3. Установщик — настройка БД
![Настройка БД](screenshots/Снимок экрана жама 3 2026-09-17 111750.png)

### 4. Сайт Joomlapng
![Сайт](screenshots/Снимок экрана жама 4 2026-09-17 112352.png)

### 5. Админ-панель
![Админка](screenshots/Снимок экрана жама 5 2026-09-17 112456.png)

### 6. Статус контейнеров
![docker compose ps](screenshots/Снимок экрана жама 6 2026-09-17 112615.png)

### 7. Логи
![Логи](screenshots/Снимок экрана жама 7 2026-09-17 113231.png)

### 8. Запуск проекта
![Запуск](screenshots/Снимок экрана жама 8 2026-09-17 113326.png)

