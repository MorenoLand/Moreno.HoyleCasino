// FUN_00408a20  00408a20

bool FUN_00408a20(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  
  cVar1 = FUN_00408990(param_1);
  cVar2 = FUN_004089c0(param_1);
  cVar3 = FUN_004089f0(param_1);
  bVar4 = cVar1 != '\0';
  if (cVar2 != '\0') {
    bVar4 = bVar4 + 1;
  }
  if (cVar3 != '\0') {
    bVar4 = bVar4 + 1;
  }
  return 1 < bVar4;
}

