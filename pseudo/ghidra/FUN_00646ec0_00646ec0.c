// FUN_00646ec0  00646ec0

int __fastcall FUN_00646ec0(int param_1)

{
  char cVar1;
  int iVar2;
  int local_c;
  
  cVar1 = FUN_005f54c0();
  if (cVar1 == '\0') {
    cVar1 = FUN_00646d10();
    if (cVar1 == '\0') {
      local_c = 0;
    }
    else {
      local_c = FUN_005f5550();
      local_c = local_c / 2;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
    iVar2 = iVar2 + local_c;
  }
  else {
    iVar2 = FUN_00646e40();
  }
  return iVar2;
}

