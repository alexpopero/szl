# Szl #

## What is it? ##

Szl is a compiler and runtime for the Sawzall language.  It includes support for statistical aggregation of values read or computed from the input.  Google uses Sawzall to process log data generated by Google's servers.

Since a Sawzall program processes one record of input at a time and does not preserve any state (values of variables) between records, it is well suited for execution as the map phase of a map-reduce.  The library also includes support for the statistical aggregation that would be done in the reduce phase of a map-reduce.

## Latest Updates ##

http://szl.googlecode.com/svn/trunk/ChangeLog

## Discussion ##

http://groups.google.com/group/szl-users

## Quick Example ##

```
  topwords: table top(3) of word: string weight count: int;
  fields: array of bytes = splitcsvline(input);
  w: string = string(fields[0]);
  c: int = int(string(fields[1]), 10);
  if (c != 0) {
    emit topwords <- w weight c;
  }
```

Given the input:
```
  abc,1
  def,2
  ghi,3
  def,4
  jkl,5
```

The program (using --table\_output) emits:
```
  topwords[] = def, 6, 0
  topwords[] = jkl, 5, 0
  topwords[] = ghi, 3, 0
```

For more complete examples see the documentation on the [Overview](Overview.md) page.