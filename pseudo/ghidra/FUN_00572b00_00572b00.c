// FUN_00572b00  00572b00

void __fastcall FUN_00572b00(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006a6138;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005fc360(DAT_00781870 ^ (uint)&stack0xfffffffc);
  switch(uVar1) {
  case 0:
    FUN_0056c370();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
    break;
  case 1:
    *(undefined1 *)(DAT_00793450 + 0x98) = 1;
    FUN_0056de20();
    (**(code **)(**(int **)(DAT_00793450 + 0x30) + 0x70))();
    if (*(int *)(DAT_00793450 + 0xa0) == 0) {
      (**(code **)(**(int **)(DAT_00793450 + 0x18) + 0xd0))();
    }
    if (*(char *)(DAT_00793450 + 0x99) == '\0') {
      FUN_0056ed20();
    }
    FUN_0056e930();
    break;
  case 2:
    *(undefined1 *)(DAT_00793450 + 0x98) = 0;
    if (*(char *)(DAT_00793450 + 0x99) == '\0') {
      FUN_0056f870();
    }
    FUN_0056eb20();
    FUN_0056e480();
    pvVar2 = operator_new(0x20);
    uStack_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uStack_24 = 0;
    }
    else {
      uStack_24 = FUN_0056fc80();
    }
    uStack_8 = 0xffffffff;
    FUN_005fc420(uStack_24);
    break;
  case 3:
    FUN_0056ebc0();
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\roadkillslotroom.cpp",0x12f);
  }
  ExceptionList = local_10;
  return;
}

