// FUN_0061f8a0  0061f8a0

void __thiscall
FUN_0061f8a0(int param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  longlong lVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *local_9c;
  void *local_54;
  uint local_50;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  char local_29;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  char local_9;
  int local_8;
  
  local_20 = (int *)(*(int *)(param_1 + 0x310) + -8 + *(int *)(param_1 + 0x30c) * 8);
  lVar1 = (ulonglong)(*local_20 + 1) * 0x18;
  pvVar3 = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  for (local_1c = 0; local_1c < *local_20; local_1c = local_1c + 1) {
    puVar4 = (undefined4 *)(local_20[1] + local_1c * 0x18);
    puVar7 = (undefined4 *)(local_1c * 0x18 + (int)pvVar3);
    *puVar7 = *puVar4;
    puVar7[1] = puVar4[1];
    puVar7[2] = puVar4[2];
    puVar7[3] = puVar4[3];
    puVar7[4] = puVar4[4];
    puVar7[5] = puVar4[5];
  }
  operator_delete((void *)local_20[1]);
  local_20[1] = (int)pvVar3;
  local_9 = '\0';
  local_29 = '\0';
  for (local_1c = 0; local_1c < param_3 * param_4; local_1c = local_1c + 1) {
    if (((*(char *)(param_2 + local_1c * 4) != '\0') ||
        (*(char *)(param_2 + 1 + local_1c * 4) != '\0')) ||
       (*(char *)(param_2 + 2 + local_1c * 4) != '\0')) {
      local_9 = '\x01';
    }
    if (*(char *)(param_2 + 3 + local_1c * 4) != '\0') {
      local_29 = '\x01';
      break;
    }
  }
  if ((param_5 == 4) || (param_5 == 0x80)) {
    if ((local_9 == '\0') || (local_29 != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if ((param_5 == 4) || (param_5 == 0x80)) {
      for (local_1c = 0; local_1c < param_3 * param_4; local_1c = local_1c + 1) {
        *(undefined1 *)(param_2 + 3 + local_1c * 4) = 0xff;
      }
    }
    else {
      local_50 = 0xffffffff;
      switch(param_5) {
      case 0xe:
        local_50 = 0x80;
        break;
      case 0xf:
      case 0x10:
      case 0x40:
        local_50 = 0;
        break;
      case 0x20:
        local_50 = 0xff;
      }
      for (local_1c = 0; local_1c < param_3 * param_4; local_1c = local_1c + 1) {
        if (((*(byte *)(param_2 + local_1c * 4) == local_50) &&
            (*(byte *)(param_2 + 1 + local_1c * 4) == local_50)) &&
           (*(byte *)(param_2 + 2 + local_1c * 4) == local_50)) {
          *(undefined1 *)(param_2 + 3 + local_1c * 4) = 0;
        }
        else {
          *(undefined1 *)(param_2 + 3 + local_1c * 4) = 0xff;
        }
      }
    }
  }
  local_34 = 1;
  local_8 = 0;
  local_30 = 0;
  local_44 = 0;
  do {
    uVar8 = local_44;
    if (param_4 <= (int)local_44) {
LAB_0061fc23:
      if (local_8 == 0) {
        if (param_6 == '\0') {
          local_28 = 0;
          local_38 = 0;
          local_3c = 0;
          local_10 = 0;
        }
        else {
          FUN_00620650(param_2,param_3,param_4,&local_28,&local_38,&local_3c,&local_10);
        }
        local_24 = (int *)(*local_20 * 0x18 + local_20[1]);
        if ((((local_28 == param_3) || (local_38 == param_4)) || (local_3c == param_3)) ||
           (local_10 == param_4)) {
          local_24[2] = 0;
          local_24[3] = 0;
          *local_24 = 0;
          local_24[1] = 0;
          local_24[5] = 0;
          local_24[4] = 0;
        }
        else {
          local_24[2] = local_28;
          local_24[3] = local_38;
          *local_24 = (param_3 - local_28) - local_3c;
          local_24[1] = (param_4 - local_38) - local_10;
          pvVar3 = operator_new(-(uint)((int)((ulonglong)(uint)local_24[1] * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)(uint)local_24[1] * 4));
          local_24[5] = (int)pvVar3;
          pvVar3 = operator_new(-(uint)((int)((ulonglong)(uint)local_24[1] * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)(uint)local_24[1] * 4));
          local_24[4] = (int)pvVar3;
          local_54 = *(void **)(param_1 + 0x31c);
          if (local_54 == (void *)0x0) {
            local_54 = operator_new(0x80000);
          }
          pvVar3 = operator_new(*local_24 * local_24[1]);
          pvVar5 = operator_new(*local_24 * local_24[1]);
          memset(local_54,0,0x80000);
          if (*(ushort *)(param_1 + 0x308) < 0x100) {
            FUN_00622150(param_1 + 8,*(undefined2 *)(param_1 + 0x308),
                         param_2 + (local_38 * param_3 + local_28) * 4,pvVar3,pvVar5,*local_24,
                         local_24[1]);
          }
          else {
            FUN_00622340(param_1 + 8,*(undefined2 *)(param_1 + 0x308),local_54,
                         param_2 + (local_38 * param_3 + local_28) * 4,pvVar3,pvVar5,*local_24,
                         local_24[1]);
          }
          for (local_18 = 0; local_18 < local_24[1]; local_18 = local_18 + 1) {
            if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))
               ) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              local_9c = (void *)(param_2 + ((local_18 + local_38) * param_3 + local_28) * 4);
            }
            else {
              local_9c = (void *)(local_18 * *local_24 + (int)pvVar3);
            }
            uVar6 = FUN_00618330(local_9c,*local_24,local_24[4] + local_18 * 4,
                                 (void *)(local_18 * *local_24 + (int)pvVar5),param_5);
            *(undefined4 *)(local_24[5] + local_18 * 4) = uVar6;
          }
          operator_delete(pvVar3);
          operator_delete(pvVar5);
          if (local_54 != *(void **)(param_1 + 0x31c)) {
            operator_delete(local_54);
          }
        }
        *local_20 = *local_20 + 1;
      }
      else {
        for (local_44 = 0; (int)local_44 < param_4; local_44 = local_44 + 1 + local_30) {
          FUN_0061f8a0(param_2 + local_44 * param_3 * 4,param_3,local_30,param_5,
                       CONCAT31((int3)(uVar8 >> 8),param_6));
          uVar8 = local_44;
        }
      }
      return;
    }
    for (local_40 = 0; (int)local_40 < param_3; local_40 = local_40 + 1) {
      local_34 = 1;
      uVar6 = *(undefined4 *)(param_2 + (local_44 * param_3 + local_40) * 4);
      uVar8 = local_40 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      local_14._0_1_ = (char)uVar6;
      local_14._1_1_ = (char)((uint)uVar6 >> 8);
      local_14._2_1_ = (byte)((uint)uVar6 >> 0x10);
      local_14 = uVar6;
      if (uVar8 == 0) {
        if ((((char)local_14 != -1) || (local_14._1_1_ != -1)) ||
           (uVar8 = (uint)local_14._2_1_, uVar8 < 0xff)) {
          local_34 = 0;
          break;
        }
      }
      else if ((((char)local_14 != '\0') || (local_14._1_1_ != '\0')) ||
              (uVar8 = (uint)local_14._2_1_, uVar8 != 0)) {
        local_34 = 0;
        break;
      }
      uVar8 = 0;
    }
    if (local_34 != 0) {
      local_8 = 1;
      local_30 = local_44;
      goto LAB_0061fc23;
    }
    local_44 = local_44 + 1;
  } while( true );
}

