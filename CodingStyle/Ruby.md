# Ruby Coding Style

## Conditional

### if

```ruby
if <conditional>
  <statements>
elsif <conditional>
  <statements>
else
  <statements>
end
```

### unless

```ruby
unless <conditional>
  <statements>
else
  <statements>
end
```

### case

```ruby
case <var>
when <val>
  <statements>
when <val>
  <statements>
else
  <statements>
end
```

## Iteration

### loop

```ruby
loop do
  <statements>
end
```

### while

```ruby
while <conditional>
  <statements>
end
```

### until

```ruby
until <conditional>
  <statements>
end
```

### times

```ruby
<num>.times do
  <statements>
end
```

### each

```ruby
# for array
<array>.each do |<var>|
  <statements>
end

# for hash
<hash>.each do |<key var>, <val var>|
  <statements>
end
```

## Definition

### class

```ruby
class <class name>
  <class definition>
end
```

### method

```ruby
def <method name>
  <method difinition>
end
```

### module

```ruby
module <module name>
  <module definition>
end
```

## Error Handling

### Exception

```ruby
begin
  <statements>
rescue
  <exception statements>
end
```

### Ensure

```ruby
begin
  <statements>
rescue
  <exception statements>
ensure
  <statements>
end
```

