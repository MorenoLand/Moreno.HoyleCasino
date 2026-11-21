// FUN_00537050  00537050

void __fastcall FUN_00537050(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_5c;
  char acStack_58 [8];
  uint local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34 [9];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_50 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_48 = 0;
  local_4c = 0;
  local_c = 0;
  local_44 = (**(code **)(*DAT_00793394 + 100))();
  local_38 = -1;
  local_40 = 0;
  local_3c = *(int *)(param_1 + 8);
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    acStack_58[local_c] = local_c + 1 <= local_3c;
    *(undefined4 *)(&DAT_007933c4 + local_c * 4) = 0xffffffff;
  }
  local_4c = *(undefined4 *)(param_1 + 8);
  for (local_5c = 0; local_5c < 5; local_5c = local_5c + 1) {
    local_40 = *(undefined4 *)(&DAT_0072ac14 + local_5c * 4);
    if (acStack_58[local_5c] != '\0') {
      for (local_c = 0; (*(int *)(&DAT_007933c4 + local_5c * 4) == -1 && (local_c < local_44));
          local_c = local_c + 1) {
        uVar5 = local_40;
        uVar1 = (**(code **)(*DAT_00793394 + 0x68))(local_c,local_40);
        local_38 = FUN_00537e60(uVar1,uVar5);
        if (local_38 != -1) {
          puVar2 = (undefined4 *)(**(code **)(*DAT_00793394 + 0x68))(local_c);
          puVar4 = local_34;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar4 = puVar4 + 1;
          }
          *(undefined4 *)(param_1 + 100 + local_5c * 4) = local_10;
          *(undefined1 *)(param_1 + local_5c + 0x10) = 1;
          if (local_38 == 0) {
            *(undefined1 *)(param_1 + 0x7c) = 1;
            local_8 = (**(code **)(*DAT_00793394 + 0x5c))(local_5c + 1,0);
          }
          else {
            local_8 = (**(code **)(*DAT_00793394 + 0x5c))(local_4c,local_38);
          }
          iVar3 = (**(code **)(*DAT_00793394 + 0x60))(local_c);
          local_48 = iVar3 * local_8 + local_48;
          *(int *)(&DAT_007933c4 + local_5c * 4) = local_38;
        }
      }
    }
  }
  __security_check_cookie(local_50 ^ (uint)&stack0xfffffffc);
  return;
}

