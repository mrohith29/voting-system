FROM nginx:alpine
WORKDIR /usr/share/nginx/html
COPY index.html info.html detailes.html results.html vote.html ./
COPY css/ ./css/
COPY js/ ./js/
EXPOSE 80
CMD ["nginx", "-g", "daemon off;"]