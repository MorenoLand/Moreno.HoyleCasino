// FUN_00536da0  00536da0

int __thiscall FUN_00536da0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_6c;
  char acStack_68 [4];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [13];
  undefined4 local_1c;
  char local_15;
  int local_14;
  int local_10;
  char local_c [4];
  int local_8;
  
  local_60 = 0;
  local_64 = 0;
  local_10 = 0;
  local_5c = (**(code **)(*DAT_00793394 + 100))();
  local_50[3] = -1;
  local_58 = 0;
  local_54 = *(int *)(param_1 + 8);
  local_14 = 0;
  local_15 = '\0';
  local_50[0] = param_2;
  local_50[1] = param_3;
  local_50[2] = param_4;
  local_c[0] = '\0';
  local_c[1] = 0;
  local_c[2] = 0;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    acStack_68[local_10] = local_10 + 1 <= local_54;
    *(undefined4 *)(&DAT_007933c4 + local_10 * 4) = 0xffffffff;
  }
  local_64 = *(int *)(param_1 + 8);
  local_6c = 0;
  do {
    if (2 < local_6c) {
      return local_60;
    }
    local_58 = local_50[local_6c];
    if (acStack_68[local_6c] != '\0') {
      for (local_10 = 0; (*(int *)(&DAT_007933c4 + local_6c * 4) == -1 && (local_10 < local_5c));
          local_10 = local_10 + 1) {
        iVar4 = local_58;
        uVar2 = (**(code **)(*DAT_00793394 + 0x68))(local_10,local_58);
        local_50[3] = FUN_00537e60(uVar2,iVar4);
        if (local_50[3] != -1) {
          piVar3 = (int *)(**(code **)(*DAT_00793394 + 0x68))(local_10);
          piVar5 = local_50 + 4;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar5 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar5 = piVar5 + 1;
          }
          *(undefined4 *)(param_1 + 100 + local_6c * 4) = local_1c;
          *(undefined1 *)(param_1 + local_6c + 0x10) = 1;
          if (local_50[3] == 0) {
            *(undefined1 *)(param_1 + 0x7c) = 1;
            local_c[local_6c] = '\x01';
          }
          if (*(char *)(param_1 + 0x7c) == '\0') {
LAB_00536fbc:
            if (local_50[3] == 0) {
              local_8 = (**(code **)(*DAT_00793394 + 0x5c))(local_6c + 1,0);
            }
            else {
              local_8 = (**(code **)(*DAT_00793394 + 0x5c))(local_64,local_50[3]);
            }
            iVar4 = (**(code **)(*DAT_00793394 + 0x60))(local_10);
            local_60 = iVar4 * local_8 + local_60;
          }
          else {
            cVar1 = (**(code **)(*DAT_00793394 + 0x3c))();
            if (cVar1 == '\0') goto LAB_00536fbc;
            cVar1 = FUN_00538440();
            if ((cVar1 == '\0') &&
               ((((local_64 != 3 || (local_c[local_6c] != '\x01')) || (local_6c != 2)) ||
                (local_15 != '\0')))) goto LAB_00536fbc;
            cVar1 = FUN_00538440();
            if (cVar1 != '\0') {
              local_60 = local_60 + -100;
            }
            local_14 = FUN_005374b0();
            local_60 = local_60 + local_14;
            local_15 = '\x01';
          }
          *(int *)(&DAT_007933c4 + local_6c * 4) = local_50[3];
        }
      }
    }
    local_6c = local_6c + 1;
  } while( true );
}

