FROM	debian:buster

LABEL	maintainer="anradix@student.42.fr"
LABEL	build_date="2020-06-04"

RUN		apt-get -y update && apt-get -y upgrade

RUN		apt-get install -y \
		wget \
		nginx \
		mariadb-server mariadb-client \ 
		php-fpm php-mysql && \
		wget \
		https://wordpress.org/latest.tar.gz \
		https://www.phpmyadmin.net/downloads/phpMyAdmin-latest-english.tar.gz

RUN		tar -xzvf latest.tar.gz && \
		mv wordpress /var/www/html/wordpress && \
		rm latest.tar.gz && \
		chown -R www-data:www-data /var/www/html/wordpress/ &&\
		chmod -R 755 /var/www/html/wordpress/ && \
		rm var/www/html/index.nginx-debian.html && rm /var/www/html/wordpress/wp-config-sample.php

RUN		tar -xzvf phpMyAdmin-5.0.1-english.tar.gz && \
		mv phpMyAdmin-5.0.1-english /var/www/html/phpmyadmin && \
		rm phpMyAdmin-5.0.1-english.tar.gz

RUN		openssl req -newkey rsa:2048 -nodes -keyout /etc/ssl/private/ssl_key.key \
		-x509 -days 365 -out /etc/ssl/certs/ssl_certificate.crt \
		-subj "/C=FR/ST=Paris/L=Paris/O=42/OU=42/CN=anradix"

COPY	./srcs/default ./etc/nginx/sites-aviable
COPY	./srcs/infos.php ./var/www/html
COPY	./srcs/wp-config.php ./var/www/html/wordpress
COPY	./srcs/wp-database	wp-database
COPY	./srcs/start.sh start.sh

RUN		mysql -u root < wp-database

CMD		bash start.sh && tail -f /dev/null
