from fastapi import FastAPI,Depends
from sqlalchemy import text
from sqlalchemy.ext.asyncio import AsyncSession

from database import get_db
app = FastAPI()

@app.get("/")
def home():
    return {"message": "测试"}

@app.get("/user/{name}")
def greet_user(name: str):
    return f"你好,{name}!"

@app.get("/users")
async def get_users(db: AsyncSession = Depends(get_db)):
    result = await db.execute(text("SELECT 1"))
    return {"db_test": result.scalar()}