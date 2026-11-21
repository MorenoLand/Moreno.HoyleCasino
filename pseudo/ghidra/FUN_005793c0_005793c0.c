// FUN_005793c0  005793c0

void __fastcall FUN_005793c0(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a6603;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar1) {
  case 0:
    FUN_00573960();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    *(undefined1 *)(DAT_0079345c + 0x68) = 1;
    FUN_00575b20();
    (**(code **)(**(int **)(DAT_0079345c + 8) + 0x70))();
    if (*(int *)(DAT_0079345c + 0x70) == 0) {
      (**(code **)(**(int **)(DAT_0079345c + 0x54) + 0xd0))();
    }
    FUN_00576280();
    break;
  case 2:
    FUN_00576160();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 3:
    pvVar2 = operator_new(0x28);
    uStack_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uStack_2c = 0;
    }
    else {
      uStack_2c = FUN_00577d40();
    }
    uStack_8 = 0xffffffff;
    FUN_005fc420(uStack_2c);
    break;
  case 4:
    (**(code **)(**(int **)(DAT_0079345c + 0x14) + 0x74))();
    *(undefined4 *)(*(int *)(DAT_0079345c + 0x10) + 0x178) = 6;
    FUN_005eaf00(0x16020);
    pvVar2 = operator_new(0x1c);
    uStack_8 = 1;
    if (pvVar2 == (void *)0x0) {
      uStack_30 = 0;
    }
    else {
      uStack_30 = FUN_00600a70(0);
    }
    uStack_8 = 0xffffffff;
    FUN_005f5d50(uStack_30);
    FUN_00576920();
    break;
  case 5:
    FUN_00575260();
    break;
  case 6:
    FUN_005755c0();
    break;
  case 7:
    FUN_00575860();
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\sultanslotroom.cpp",0x14a);
  }
  ExceptionList = local_10;
  return;
}

