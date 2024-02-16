def leggiCibi(filename):
  cibi = {}

  try:
    with open(filename) as file:
      for line in file:
        parts = line.strip().split(';')
        cibi[parts[0]] = {'costo':float(parts[1]), 'calorie':float(parts[2])}

  except Exception as e:
    print(f'Errore {e}')
    return None

  return cibi

def leggiIngredienti(filename):
  ingredienti = []
  sezIngredienti = False

  try:
    with open(filename) as file:
      for line in file:
        line = line.strip()
        if 'Ingredienti' in line:
          sezIngredienti = True
          continue

        if sezIngredienti and len(line) > 0:
          parts = line.split(';')
          ingrediente = {'nome': parts[0], 'quantita': float(parts[1])}
          ingredienti.append(ingrediente)
        else:
          return ingredienti

  except Exception as e:
    print(f'Errore {e}')
    return None

def stampaRicetta(ingredienti, cibi):
  print('Ingredienti:')

  costo = 0
  calorie = 0

  for ingrediente in ingredienti:
    nome = ingrediente["nome"]
    print(f'{nome:20s} - {ingrediente["quantita"]:5.2f}')
    costo += ingrediente['quantita'] / 1000 * cibi[nome]['costo']
    calorie += ingrediente['quantita'] / 1000 * cibi[nome]['calorie']

  print(f'\nNumero di ingredienti: {len(ingredienti)}')
  print(f'Costo ricetta: {costo:.2f}')
  print(f'Calorie ricetta: {calorie:.2f}')


def main():
  cibi = leggiCibi('cibi.txt')
  if cibi is None:
    return

  ingredienti = leggiIngredienti('fusilli_alle_olive.txt')
  if ingredienti is None:
    return

  stampaRicetta(ingredienti, cibi)

main()