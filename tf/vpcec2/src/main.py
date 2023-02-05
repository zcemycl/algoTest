from fastapi import FastAPI, HTTPException
import urllib.request
import socket

app = FastAPI()

@app.get("/", status_code=200)
def root() -> dict:
    url = 'http://169.254.169.254/latest/meta-data/instance-id'
    try:
        instanceid = urllib.request.urlopen(url).read().decode()
    except: 
        instanceid = "unknown"
    try:
        socketname = socket.gethostname()
    except:
        socketname = "unknown"
    return {
        "msg": "Hello, World!", 
        "ec2_identifier": instanceid,
        "docker_identifier": socketname
    }

if __name__ == "__main__":
    import uvicorn

    uvicorn.run(app, host="0.0.0.0", port=8080, log_level="debug")