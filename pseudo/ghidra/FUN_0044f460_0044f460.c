// FUN_0044f460  0044f460

void __fastcall FUN_0044f460(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_18;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 local_c;
  
  uVar1 = FUN_0044f750(0xe,4);
  *(undefined1 *)(param_1 + 0x2be) = uVar1;
  iVar2 = FUN_0044f700(0xe);
  if (iVar2 == 0) {
LAB_0044f4b2:
    local_c = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2be) != '\0') {
      iVar2 = FUN_0044f700(0xe);
      if (iVar2 < 2) goto LAB_0044f4b2;
    }
    local_c = 1;
  }
  *(undefined1 *)(param_1 + 0x2bf) = local_c;
  uVar1 = FUN_0044f910();
  *(undefined1 *)(param_1 + 0x2c0) = uVar1;
  uVar1 = FUN_0044fa20();
  *(undefined1 *)(param_1 + 0x2c1) = uVar1;
  if ((*(char *)(param_1 + 0x2c0) == '\0') && (*(char *)(param_1 + 0x2c1) == '\0')) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  *(undefined1 *)(param_1 + 0x2c2) = local_10;
  uVar1 = FUN_0044fb20();
  *(undefined1 *)(param_1 + 0x2c3) = uVar1;
  uVar1 = FUN_0044fe60();
  *(undefined1 *)(param_1 + 0x2c4) = uVar1;
  if ((*(char *)(param_1 + 0x2c3) == '\0') && (*(char *)(param_1 + 0x2c4) == '\0')) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  *(undefined1 *)(param_1 + 0x2c5) = local_14;
  uVar1 = FUN_004502f0();
  *(undefined1 *)(param_1 + 0x2c6) = uVar1;
  uVar1 = FUN_00450680();
  *(undefined1 *)(param_1 + 0x2c7) = uVar1;
  if ((*(char *)(param_1 + 0x2c6) == '\0') && (*(char *)(param_1 + 0x2c7) == '\0')) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  *(undefined1 *)(param_1 + 0x2c8) = local_18;
  iVar2 = FUN_00450b60(4,1);
  *(bool *)(param_1 + 0x2c9) = iVar2 != 0;
  iVar2 = FUN_00450b60(3,1);
  *(bool *)(param_1 + 0x2ca) = iVar2 != 0;
  iVar2 = FUN_00450b60(3,2);
  *(bool *)(param_1 + 0x2cb) = iVar2 != 0;
  iVar2 = FUN_00450b60(2,3);
  *(bool *)(param_1 + 0x2cc) = iVar2 != 0;
  iVar2 = FUN_00450b60(2,2);
  *(bool *)(param_1 + 0x2cd) = iVar2 != 0;
  iVar2 = FUN_00450b60(2,1);
  *(bool *)(param_1 + 0x2ce) = iVar2 != 0;
  return;
}

