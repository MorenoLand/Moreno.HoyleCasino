// FUN_0065e770  0065e770

void __fastcall FUN_0065e770(int *param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_0065c4d0();
  iVar2 = FUN_0065ea70();
  if (iVar2 == 0) {
    cVar1 = (**(code **)(*param_1 + 0xa0))();
    if (cVar1 != '\0') {
      FUN_0065e670();
    }
  }
  return;
}

