// FUN_00600590  00600590

int __fastcall FUN_00600590(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xc))();
  if (cVar1 == '\0') {
    iVar2 = FUN_005eb220();
  }
  else {
    iVar2 = FUN_005eb220();
    iVar2 = iVar2 + param_1[3];
  }
  return iVar2;
}

