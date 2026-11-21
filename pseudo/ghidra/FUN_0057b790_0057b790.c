// FUN_0057b790  0057b790

void __thiscall FUN_0057b790(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 0x18) == 1) {
    if ((((*(int *)(param_2 + 8) < 0) ||
         (iVar3 = FUN_005f8550(), iVar3 + -3 < *(int *)(param_2 + 8))) ||
        (*(int *)(param_2 + 0xc) < 0)) || (0x21 < *(int *)(param_2 + 0xc))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = param_2;
      FUN_005fb300(2);
      cVar2 = FUN_005f56a0(iVar3);
      if (cVar2 != '\0') {
        piVar4 = (int *)FUN_005fb300(2);
        (**(code **)(*piVar4 + 0x3c))(param_2);
        return;
      }
    }
    if (bVar1) {
      FUN_0057d3a0();
      *(undefined4 *)(*(int *)(param_1 + 0x19e0) + 0x1b4) = 0xffffffff;
      FUN_0057b1b0();
    }
    else {
      cVar2 = FUN_005f8910();
      if (cVar2 != '\0') {
        FUN_0057d3a0();
        FUN_0057cb70(*(undefined4 *)(*(int *)(param_1 + 0x19e0) + 0x1b4));
      }
    }
  }
  FUN_005f72f0(param_2);
  return;
}

