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
5. Rename `Program.cs` to `Sample.cs`.

## Test for Main Project
1. Create test project,
```
dotnet new xunit -n Sample.Tests
```
2. Link test project to solution. 
```
dotnet sln sample.sln add ./Sample.Tests/Sample.Tests.csproj
```
3. Refer test project to main project.
```
dotnet add ./Sample.Tests/Sample.Tests.csproj reference ./Sample/Sample.csproj
```
4. At `sample` folder, run this,
```
dotnet test
```

## Add to Github Actions
1. In `dotnet.yml`, add the following at the end, 
```
    # Test Sample
    - name: Sample Test
      run: |
        cd cs/sample
        dotnet restore
        dotnet build --no-restore
        dotnet test --no-build --verbosity normal
```

# References
- [Tutorial: Create a .NET class library using Visual Studio Code](https://docs.microsoft.com/en-us/dotnet/core/tutorials/library-with-visual-studio-code?pivots=dotnet-5-0)
- [Tutorial: Test a .NET class library using Visual Studio Code](https://docs.microsoft.com/en-us/dotnet/core/tutorials/testing-library-with-visual-studio-code?pivots=dotnet-5-0)
- [Unit testing C# in .NET Core using dotnet test and xUnit](https://docs.microsoft.com/en-us/dotnet/core/testing/unit-testing-with-dotnet-test)
- [Unit Testing with .NET Core](https://www.jeremymorgan.com/tutorials/c-sharp/how-to-net-core-unit-test/)