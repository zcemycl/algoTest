from fastapi import FastAPI, HTTPException
import urllib.request

app = FastAPI()

@app.get("/", status_code=200)
def root() -> dict:
    url = 'http://169.254.169.254/latest/meta-data/instance-id'
    try:
        instanceid = urllib.request.urlopen(url).read().decode()
    except: 
        instanceid = "unknown"
    return {
        "msg": "Hello, World!", 
        "identifier": instanceid
    }

if __name__ == "__main__":
    import uvicorn

    uvicorn.run(app, host="0.0.0.0", port=8080, log_level="debug")