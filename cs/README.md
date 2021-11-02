# How to Start?

## Main Project
1. Create a base folder and its solution file. 
```
dotnet new sln -o sample 
```
2. Create console app main project folder and its content. Check other dotnet templates by `dotnet new`.
```
dotnet new console -n Sample
```
3. Link main project to solution. 
```
dotnet sln sample.sln add ./Sample/Sample.csproj
```
4. Run main project,
```
dotnet run -p ./Sample/Sample.csproj
```

## Test for Main Project
1. Create test project,
```
dotnet new xunit -n Sample.Tests
```