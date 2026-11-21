// FUN_00418580  00418580

bool __fastcall FUN_00418580(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_005da830(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00418400(0xffffffff);
    bVar3 = *(char *)(iVar2 + 4) == '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

