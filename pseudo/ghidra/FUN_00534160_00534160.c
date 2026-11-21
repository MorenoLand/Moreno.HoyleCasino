// FUN_00534160  00534160

void __fastcall FUN_00534160(int *param_1)

{
  void *pvVar1;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a4a47;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_1[5]) {
  case 1:
    FUN_0052c7e0();
    if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
      (**(code **)(*param_1 + 8))(2,0x14);
    }
    break;
  case 2:
    (**(code **)(*param_1 + 8))(3,0x3c);
    break;
  case 3:
    (**(code **)(*DAT_00793388 + 700))(0x14);
    (**(code **)(*param_1 + 8))(4,0x3c);
    break;
  case 4:
    FUN_005d0f00();
    FUN_0052c7e0();
    pvVar1 = operator_new(0x20);
    uStack_8 = 0;
    if (pvVar1 == (void *)0x0) {
      uStack_28 = 0;
    }
    else {
      uStack_28 = FUN_00530f30();
    }
    uStack_8 = 0xffffffff;
    FUN_005fc420(uStack_28);
    (**(code **)(*param_1 + 8))(5,0);
    break;
  case 5:
    if (DAT_00793388[1] != 0) {
      (**(code **)(*param_1 + 8))(5,0);
    }
    (**(code **)(*param_1 + 8))(4,0x50);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\slotmachineroom.cpp",0x173,
                 DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = local_10;
  return;
}

