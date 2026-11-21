// FUN_00465650  00465650

void __fastcall FUN_00465650(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 0xd; local_10 = local_10 + 1) {
      iVar1 = FUN_0060ca40(local_c * 0xd + local_10);
      if (local_10 + 1 < 0xb) {
        *(int *)(iVar1 + 4) = local_10 + 1;
      }
      else {
        *(undefined4 *)(iVar1 + 4) = 10;
      }
      *(int *)(iVar1 + 0xc) = local_10;
      if (local_10 == 0) {
        *(undefined4 *)(iVar1 + 4) = 0xb;
        iVar2 = FUN_0047ce60(param_1);
        if (iVar2 != 6) {
          iVar2 = FUN_0047ce60(param_1);
          if (iVar2 != 0xd) {
            *(undefined4 *)(iVar1 + 0xc) = 0xd;
          }
        }
      }
      FUN_00463e30(local_c * 0xd + local_10);
    }
  }
  return;
}

