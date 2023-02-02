from fastapi import FastAPI, HTTPException

app = FastAPI()

@app.get("/", status_code=200)
def root() -> dict:
    return {"msg": "Hello, World!"}

if __name__ == "__main__":
    import uvicorn

    uvicorn.run(app, host="0.0.0.0", port=8080, log_level="debug")