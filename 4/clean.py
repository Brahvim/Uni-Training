import pandas as pd

df = pd.read_csv("./files/clean.csv")
df.drop(df.index[0])
print(df)
