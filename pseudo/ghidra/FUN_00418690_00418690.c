// FUN_00418690  00418690

bool __fastcall FUN_00418690(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00418400(0xffffffff);
    bVar3 = *(char *)(iVar2 + 8) != '\0';
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

