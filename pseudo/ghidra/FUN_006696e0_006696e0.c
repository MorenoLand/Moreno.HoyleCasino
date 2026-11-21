// FUN_006696e0  006696e0

void __fastcall FUN_006696e0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006accc7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064ce60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  uVar1 = FUN_00607960("RoomChar",0);
  pvVar2 = operator_new(0x3ac);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_0063a0c0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = local_40;
  uVar6 = 1;
  uVar5 = 1;
  uVar4 = 0;
  uVar3 = (**(code **)(*DAT_0162ee84 + 0x164))(uVar1,0,1,1,1);
  FUN_0063a8d0(uVar3,uVar1,uVar4,uVar5,uVar6);
  FUN_00646150(100,0x4d);
  FUN_00646380(1);
  FUN_006464d0(0,0);
  local_44 = operator_new(0xd0);
  local_8 = 1;
  if (local_44 == (undefined4 *)0x0) {
    local_44 = (undefined4 *)0x0;
  }
  else {
    FUN_006280d0();
    *local_44 = SituationListBox::vftable;
    local_44[0x33] = param_1;
  }
  local_8 = 0xffffffff;
  uVar1 = FUN_005fac90(local_44,0,0x325b8d,10,0xf0,1,0,0x30d4cc,0x11f,0xce,0x30d4cb,0x11f,0x18,
                       0x30d4cf,0x11d,0x26,0xba,0x11d,0x26,0x10,0xba,7,0x18,0x113,0x10,0xc,4,4,
                       0xffffffff,200,200,200,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  local_48 = operator_new(0xd0);
  local_8 = 2;
  if (local_48 == (undefined4 *)0x0) {
    local_48 = (undefined4 *)0x0;
  }
  else {
    FUN_006280d0();
    *local_48 = SituationInstanceListBox::vftable;
    local_48[0x33] = param_1;
  }
  local_8 = 0xffffffff;
  uVar1 = FUN_005fac90(local_48,0,0x325b8d,0x145,0xf0,1,0,0x30d4cc,0x11f,0xce,0x30d4cb,0x11f,0x18,
                       0x30d4cf,0x11d,0x26,0xba,0x11d,0x26,0x10,0xba,7,0x18,0x113,0x10,0xc,4,4,
                       0xffffffff,200,200,200,0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  FUN_005f9de0(0,0,0x30d4de,5,4,1,&DAT_006e002c,4,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,1,0x30d4de,0x12,0xa0,1,&DAT_006e0024,4,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,2,0x30d4de,0xb7,0xa0,1,&DAT_006e001c,4,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,3,0x30d4de,0x15e,0xeb,10,&DAT_006e0024,4,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,4,0x30d4de,0x1b5,0xeb,10,&DAT_006e0014,4,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005f9de0(0,5,0x30d4de,0x20b,0xeb,10,&DAT_006e001c,4,0xffffffff,0xffffffff,0xffffffff,0);
  FUN_005fa880(0,0xffffffff,0x46,0x46,0x14,0x3c,1,200,200,200,200,200,200);
  uVar1 = FUN_005f9ff0(0,0,6,0,0x30d4ca,0x19,0x40,2,"speech",4,4,4,0xffffffff,0x14,0);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  FUN_005f9ff0(0,0,7,0,0x30d4ca,0x19,0x54,2,"habits",4,4,4,0xffffffff,0x14,0);
  FUN_005f9ff0(0,0,8,0,0x30d4ca,0x19,0x68,2,"blinks",4,4,4,0xffffffff,0x14,0);
  FUN_006065d0(6);
  FUN_005fa880(0,0xffffffff,0x7d,0x54,0xc3,0x28,1,200,200,200,200,200,200);
  uVar1 = FUN_005f9ef0(0,0xffffffff,0x30d4c9,200,0x31,2,"reverse East/West",4,0xffffffff,0xffffffff,
                       0xffffffff,0x14,0);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_005f9ef0(0,0xffffffff,0x30d4c9,200,0x4d,2,"lock situation",4,0xffffffff,0xffffffff,
                       0xffffffff,0x14,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_005f9ef0(0,0xffffffff,0x30d4c9,200,0x69,2,"lock character",4,0xffffffff,0xffffffff,
                       0xffffffff,0x14,0);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  (**(code **)(**(int **)(param_1 + 0x70) + 0xf4))();
  uVar1 = FUN_005fac90(0,0,0x325b8d,0x145,0,1,0,0x30d4cc,0x11f,0xce,0x30d4cb,0x11f,0x18,0x30d4cf,
                       0x11d,0x26,0xba,0x11d,0x26,0x10,0xba,7,0x18,0x113,0x10,0xc,4,4,0xffffffff,200
                       ,200,200,0);
  *(undefined4 *)(param_1 + 100) = uVar1;
  FUN_00669d50();
  ExceptionList = local_10;
  return;
}

