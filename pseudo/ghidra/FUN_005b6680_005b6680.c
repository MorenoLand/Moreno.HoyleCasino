// FUN_005b6680  005b6680

bool __fastcall FUN_005b6680(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_005b5fb0(0xffffffff);
    bVar3 = *(char *)(iVar2 + 0xb) == '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

