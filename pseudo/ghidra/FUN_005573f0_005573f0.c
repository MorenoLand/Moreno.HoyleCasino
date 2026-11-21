// FUN_005573f0  005573f0

undefined4 __fastcall FUN_005573f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short local_10;
  short local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  do {
    if (4 < local_8) {
      if ((local_10 == 0) || (local_c == 0)) {
        uVar1 = 0;
      }
      else {
        iVar2 = FUN_00641280(local_10);
        iVar3 = FUN_00641280(local_c);
        if (iVar2 == iVar3) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      return uVar1;
    }
    if (*(short *)(param_1 + 0x18 + local_8 * 2) != 0) {
      if (local_10 == 0) {
        local_10 = *(short *)(param_1 + 0x18 + local_8 * 2);
      }
      else {
        if (local_c != 0) {
          return 0;
        }
        local_c = *(short *)(param_1 + 0x18 + local_8 * 2);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

