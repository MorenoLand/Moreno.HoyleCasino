// FUN_0059b080  0059b080

void __thiscall FUN_0059b080(undefined4 param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined2 extraout_var;
  int iVar2;
  undefined2 extraout_var_00;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  
  if (*(ushort *)(DAT_007935d0 + 0x120) < 0xd) {
    cVar1 = FUN_004639c0(DAT_007935d0 + 200 + param_2 * 6,2,param_1);
    if (cVar1 == '\0') {
      FUN_00641930(&local_c,DAT_007935d0 + 200 + param_2 * 6,2);
      FUN_00641e20(&local_c,2);
      local_8 = FUN_00641280(CONCAT22(extraout_var,local_c));
      iVar2 = FUN_00641280(CONCAT22(extraout_var_00,local_a));
      if (((*(ushort *)(DAT_007935d0 + 0x120) < 2) || (6 < *(ushort *)(DAT_007935d0 + 0x120))) ||
         ((iVar2 < 0xc && ((iVar2 != 0xb || (local_8 < 7)))))) {
        if ((*(short *)(DAT_007935d0 + 0x120) == 7) &&
           ((0xb < iVar2 || ((iVar2 == 0xb && (7 < local_8)))))) {
          *param_3 = 0;
          *param_4 = 1;
          FUN_00630f40("SID_BIGRAISE_STRATEGY_SEVEN");
        }
        else if ((*(short *)(DAT_007935d0 + 0x120) == 8) &&
                ((0xb < iVar2 || ((iVar2 == 0xb && (6 < local_8)))))) {
          if ((iVar2 == 0xb) || (local_8 == 8)) {
            *param_3 = 1;
            *param_4 = 0;
            FUN_00630f40("SID_BIGRAISE_STRATEGY_EIGHT_EXCEPTION");
          }
          else {
            *param_3 = 0;
            *param_4 = 1;
            FUN_00630f40("SID_BIGRAISE_STRATEGY_EIGHT");
          }
        }
        else if ((*(short *)(DAT_007935d0 + 0x120) == 9) &&
                ((0xb < iVar2 || ((iVar2 == 0xb && (6 < local_8)))))) {
          if ((iVar2 == 0xb) || (local_8 == 9)) {
            *param_3 = 1;
            *param_4 = 0;
            FUN_00630f40("SID_BIGRAISE_STRATEGY_NINE_EXCEPTION");
          }
          else {
            *param_3 = 0;
            *param_4 = 1;
            FUN_00630f40("SID_BIGRAISE_STRATEGY_NINE");
          }
        }
        else if ((*(short *)(DAT_007935d0 + 0x120) == 10) &&
                ((10 < iVar2 || ((iVar2 == 10 && (7 < local_8)))))) {
          *param_3 = 0;
          *param_4 = 1;
          FUN_00630f40("SID_BIGRAISE_STRATEGY_TEN");
        }
        else if ((*(short *)(DAT_007935d0 + 0x120) == 0xb) &&
                ((0xb < iVar2 || ((iVar2 == 0xb && (6 < local_8)))))) {
          *param_3 = 0;
          *param_4 = 1;
          FUN_00630f40("SID_BIGRAISE_STRATEGY_JACK");
        }
        else if ((*(short *)(DAT_007935d0 + 0x120) == 0xc) &&
                ((0xc < iVar2 || ((iVar2 == 0xc && (7 < local_8)))))) {
          *param_3 = 0;
          *param_4 = 1;
          FUN_00630f40("SID_BIGRAISE_STRATEGY_QUEEN");
        }
        else {
          *param_3 = 1;
          *param_4 = 0;
          FUN_00630f40("SID_BIGRAISE_STRATEGY_RISK_ANTE");
        }
      }
      else {
        *param_3 = 0;
        *param_4 = 1;
        FUN_00630f40("SID_BIGRAISE_STRATEGY_SIX");
      }
    }
    else {
      *param_3 = 1;
      *param_4 = 1;
      FUN_00630f40("SID_BIGRAISE_STRATEGY_ALL_IN");
    }
  }
  else {
    *param_3 = 1;
    *param_4 = 1;
    FUN_00630f40("SID_BIGRAISE_STRATEGY_ALL_IN_REQUIRED");
  }
  return;
}

