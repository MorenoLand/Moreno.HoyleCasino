// FUN_00646d10  00646d10

bool __fastcall FUN_00646d10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
  iVar2 = FUN_005f5550();
  iVar3 = FUN_005f8550();
  bVar4 = iVar1 + iVar2 / 2 < iVar3 / 2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    bVar4 = !bVar4;
  }
  return bVar4;
}

