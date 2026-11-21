// FUN_00562010  00562010

void __thiscall FUN_00562010(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00569fe0(param_1,0,0xffffffff);
  iVar2 = FUN_005698c0(uVar1);
  if (iVar2 == 0) {
    FUN_00566a20();
  }
  else {
    if (param_2 != '\0') {
      FUN_00560360(uVar1,iVar2);
    }
    FUN_00566b00(uVar1);
    FUN_00566ae0(iVar2);
    FUN_005669c0();
    if (param_2 != '\0') {
      FUN_00562a00(uVar1);
    }
  }
  return;
}

