// FUN_00564bd0  00564bd0

void __thiscall FUN_00564bd0(int param_1,int *param_2)

{
  bool bVar1;
  int local_10;
  int local_8;
  
  local_8 = 0;
  do {
    if (0x30 < local_8) {
      (**(code **)(*param_2 + 8))(6,0);
      return;
    }
    if (*(char *)(param_1 + local_8 + 0x564) != '\0') {
      bVar1 = false;
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        if ((local_10 == 4) && (*(char *)(param_1 + local_8 + 0x68a) == '\0')) {
          if (*(char *)(param_1 + 0x599 + local_8 * 5) == '\0') {
            bVar1 = true;
          }
          else {
            FUN_00564880(local_8);
            if (*(char *)(DAT_0079343c + 0x19) == '\0') {
              (**(code **)(*param_2 + 0x1c))(0);
              return;
            }
          }
        }
        if (*(char *)(param_1 + 0x595 + local_8 * 5 + local_10) == '\0') {
          FUN_00564770(local_8,local_10,1);
          if (bVar1) {
            FUN_00564880(local_8);
          }
          if (*(char *)(DAT_0079343c + 0x19) == '\0') {
            (**(code **)(*param_2 + 0x1c))(0);
            return;
          }
        }
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

