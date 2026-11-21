// FUN_005e6050  005e6050

void FUN_005e6050(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x311b7c) {
    FUN_005fb3a0(0x311b7e);
    iVar1 = FUN_00606570();
    if (iVar1 == 0x311b7f) {
      (**(code **)(*DAT_0162ee80 + 0x4c))(0x30ef82,DAT_0075e940);
    }
    else if (iVar1 == 0x311b80) {
      (**(code **)(*DAT_0162ee80 + 0x4c))(0x30ef82,DAT_0075e944);
    }
    else if (iVar1 == 0x311b81) {
      (**(code **)(*DAT_0162ee80 + 0x4c))(0x30ef82,DAT_0075e948);
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\DemoNavigation.cpp",0x2f3);
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

