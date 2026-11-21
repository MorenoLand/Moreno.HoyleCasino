// FUN_005229b0  005229b0

void __fastcall FUN_005229b0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_a0;
  undefined4 local_9c [38];
  
  local_9c[0] = 0xb;
  local_9c[1] = 7;
  local_9c[2] = 0x14;
  local_9c[3] = 0x20;
  local_9c[4] = 0x11;
  local_9c[5] = 5;
  local_9c[6] = 0x16;
  local_9c[7] = 0x22;
  local_9c[8] = 0xf;
  local_9c[9] = 3;
  local_9c[10] = 0x18;
  local_9c[0xb] = 0x24;
  local_9c[0xc] = 0xd;
  local_9c[0xd] = 1;
  local_9c[0xe] = 0x25;
  local_9c[0xf] = 0x1b;
  local_9c[0x10] = 10;
  local_9c[0x11] = 0x19;
  local_9c[0x12] = 0x1d;
  local_9c[0x13] = 0xc;
  local_9c[0x14] = 8;
  local_9c[0x15] = 0x13;
  local_9c[0x16] = 0x1f;
  local_9c[0x17] = 0x12;
  local_9c[0x18] = 6;
  local_9c[0x19] = 0x15;
  local_9c[0x1a] = 0x21;
  local_9c[0x1b] = 0x10;
  local_9c[0x1c] = 4;
  local_9c[0x1d] = 0x17;
  local_9c[0x1e] = 0x23;
  local_9c[0x1f] = 0xe;
  local_9c[0x20] = 2;
  local_9c[0x21] = 0;
  local_9c[0x22] = 0x1c;
  local_9c[0x23] = 9;
  local_9c[0x24] = 0x1a;
  local_9c[0x25] = 0x1e;
  iVar1 = *(int *)(param_1 + 0x314);
  FUN_00609870(*(undefined4 *)(param_1 + 0x318),1);
  FUN_00528b60(local_9c[iVar1 / 3]);
  cVar2 = FUN_005f54a0();
  if (cVar2 == '\0') {
    cVar2 = FUN_00637630();
    if ((cVar2 == '\0') || (DAT_00795f94 != '\0')) goto LAB_00522c37;
  }
  for (local_a0 = 0; local_a0 < 4; local_a0 = local_a0 + 1) {
    uVar3 = FUN_005dcb00(local_a0);
    piVar4 = (int *)FUN_0063aac0(param_1,uVar3);
    if (*piVar4 != 0) {
      uVar5 = 0;
      uVar3 = 0;
      FUN_005dcb00(local_a0,0,0);
      FUN_006464d0(uVar3,uVar5);
    }
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x14) + 0x70))();
  FUN_005226b0();
LAB_00522c37:
  FUN_005fc420(0);
  FUN_005f5d50(0);
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
  FUN_00528ca0(1);
  FUN_00522ca0();
  FUN_00522dc0();
  return;
}

