// FUN_005e5cd0  005e5cd0

void FUN_005e5cd0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x311b7c) {
    FUN_005fb3a0(0x311b7e);
    iVar1 = FUN_00606570();
    if (iVar1 == 0x311b82) {
      (**(code **)(*DAT_0162ee80 + 0x4c))(0x30f359,DAT_0075e914);
    }
    else if (iVar1 == 0x311b83) {
      (**(code **)(*DAT_0162ee80 + 0x4c))(0x30f359,DAT_0075e918);
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\DemoNavigation.cpp",0x2a0);
    }
  }
  else if (param_1 != 0x311b7d) {
    FUN_005fb000(param_1);
    return;
  }
  FUN_005f87d0();
  FUN_005f8990();
  return;
}

