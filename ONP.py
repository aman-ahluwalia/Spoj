def main():
  t = input()
  while t>0:
    anshi = raw_input()
    anshi = anshi[1:-1]
    anshita = ''
    while len(anshi) >= 4:
      pos = anshi.find(')')
      if pos == '-1':
        break;
      anshita = anshita + anshi[pos-3] + anshi[pos-1] + anshi[pos-2]
      anshi = anshi[:pos-4] + anshi[pos+1:]
    print anshita
    t = t-1

if __name__ == '__main__':
  main() 
