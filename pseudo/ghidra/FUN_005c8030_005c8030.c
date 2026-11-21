// FUN_005c8030  005c8030

undefined4 __fastcall FUN_005c8030(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x24))();
  if (cVar2 == '\0') {
    iVar1 = param_1[0x15];
    if ((iVar1 == 0) || ((5 < iVar1 && (iVar1 < 8)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

