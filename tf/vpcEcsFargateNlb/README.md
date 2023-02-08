### Steps
1. Build docker container. 
    ```
    docker build --no-cache -t fastapi-trial -f src/Dockerfile .
    docker run -dp 8088:8080 fastapi-trial
    docker exec -it xxxxx bash
    ```
2. Build infrastructure. 