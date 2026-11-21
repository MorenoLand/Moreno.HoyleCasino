// FUN_004db070  004db070

void __fastcall FUN_004db070(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  char local_80 [108];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a2524;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = DAT_00791390;
  local_14 = uVar2;
  FUN_004a2160(&local_81);
  cVar1 = FUN_004a1e10(uVar3);
  if (cVar1 == '\0') {
    uVar3 = DAT_007913b0;
    FUN_004a2160(&local_87);
    cVar1 = FUN_004a1e10(uVar3);
    if (cVar1 == '\0') {
      uVar3 = DAT_0079139c;
      FUN_004a2160(&local_88);
      cVar1 = FUN_004a1e10(uVar3);
      if (cVar1 == '\0') {
        uVar3 = DAT_00791380;
        FUN_004a2160(&local_89);
        cVar1 = FUN_004a1e10(uVar3);
        if (cVar1 == '\0') {
          uVar3 = DAT_00791418;
          FUN_004a2160(&local_8a);
          cVar1 = FUN_004a1e10(uVar3);
          if (cVar1 == '\0') {
            uVar3 = DAT_0079140c;
            FUN_004a2160(&local_8b);
            cVar1 = FUN_004a1e10(uVar3);
            if (cVar1 == '\0') {
              uVar3 = DAT_007913e4;
              FUN_004a2160(&local_8c);
              cVar1 = FUN_004a1e10(uVar3);
              if (cVar1 == '\0') {
                uVar3 = DAT_00791384;
                FUN_004a2160(&local_8d);
                cVar1 = FUN_004a1e10(uVar3);
                if (cVar1 == '\0') {
                  uVar3 = DAT_007913a0;
                  FUN_004a2160(&local_8e);
                  cVar1 = FUN_004a1e10(uVar3);
                  if (cVar1 == '\0') {
                    uVar3 = DAT_007913d4;
                    FUN_004a2160(&local_8f);
                    cVar1 = FUN_004a1e10(uVar3);
                    if (cVar1 == '\0') {
                      uVar3 = DAT_00791394;
                      FUN_004a2160(&local_90);
                      cVar1 = FUN_004a1e10(uVar3);
                      if (cVar1 == '\0') {
                        uVar3 = DAT_00791398;
                        FUN_004a2160(&local_91);
                        cVar1 = FUN_004a1e10(uVar3);
                        if (cVar1 == '\0') {
                          uVar3 = DAT_007913e8;
                          FUN_004a2160(&local_92);
                          cVar1 = FUN_004a1e10(uVar3);
                          if (cVar1 == '\0') {
                            uVar3 = DAT_007913c4;
                            FUN_004a2160(&local_93);
                            cVar1 = FUN_004a1e10(uVar3);
                            if (cVar1 == '\0') {
                              uVar3 = DAT_007913ac;
                              FUN_004a2160(&local_94);
                              cVar1 = FUN_004a1e10(uVar3);
                              if (cVar1 == '\0') {
                                uVar3 = DAT_007913cc;
                                FUN_004a2160(&local_95);
                                cVar1 = FUN_004a1e10(uVar3);
                                if (cVar1 != '\0') {
                                  uVar3 = FUN_00630f40("SID_POKER_5OFAKIND");
                                  sprintf(local_80,"%s",uVar3);
                                }
                              }
                              else {
                                uVar3 = FUN_00630f40("SID_POKER_TIGERFLUSH");
                                sprintf(local_80,"%s",uVar3);
                              }
                            }
                            else {
                              uVar3 = FUN_00630f40("SID_POKER_DOGFLUSH");
                              sprintf(local_80,"%s",uVar3);
                            }
                          }
                          else {
                            uVar3 = FUN_00630f40("SID_POKER_ROYALFLUSH");
                            sprintf(local_80,"%s",uVar3);
                          }
                        }
                        else {
                          uVar3 = FUN_00630f40("SID_POKER_STRAIGHTFLUSH");
                          sprintf(local_80,"%s",uVar3);
                        }
                      }
                      else {
                        uVar3 = FUN_00630f40("SID_POKER_4OFAKIND");
                        sprintf(local_80,"%s",uVar3);
                      }
                    }
                    else {
                      uVar3 = FUN_00630f40("SID_POKER_FULLHOUSE");
                      sprintf(local_80,"%s",uVar3);
                    }
                  }
                  else {
                    uVar3 = FUN_00630f40("SID_POKER_FLUSH");
                    sprintf(local_80,"%s",uVar3);
                  }
                }
                else {
                  uVar3 = FUN_00630f40("SID_POKER_TIGER");
                  sprintf(local_80,"%s",uVar3);
                }
              }
              else {
                uVar3 = FUN_00630f40("SID_POKER_DOG");
                sprintf(local_80,"%s",uVar3);
              }
            }
            else {
              uVar3 = FUN_00630f40("SID_POKER_STRAIGHT");
              sprintf(local_80,"%s",uVar3);
            }
          }
          else {
            uVar3 = FUN_00630f40("SID_POKER_3OFAKIND");
            sprintf(local_80,"%s",uVar3);
          }
        }
        else {
          uVar3 = FUN_00630f40("SID_POKER_TWOPAIR");
          sprintf(local_80,"%s",uVar3);
        }
      }
      else {
        uVar3 = FUN_00630f40("SID_POKER_FOURFLUSH");
        sprintf(local_80,"%s",uVar3);
      }
    }
    else {
      uVar3 = FUN_00630f40("SID_POKER_PAIR",uVar2);
      sprintf(local_80,"%s",uVar3);
    }
  }
  else {
    uVar3 = FUN_004a22f0(&local_82);
    cVar1 = FUN_004dae80(uVar3);
    iVar4 = (int)cVar1;
    uVar3 = FUN_004a22a0(&local_83);
    cVar1 = FUN_004dae80(uVar3,iVar4);
    iVar4 = (int)cVar1;
    uVar3 = FUN_004a2250(&local_84);
    cVar1 = FUN_004dae80(uVar3,iVar4);
    iVar4 = (int)cVar1;
    uVar3 = FUN_004a2200(&local_85);
    cVar1 = FUN_004dae80(uVar3,iVar4);
    iVar4 = (int)cVar1;
    uVar3 = FUN_004a21b0(&local_86);
    cVar1 = FUN_004dae80(uVar3,iVar4);
    sprintf(local_80,"%c-%c-%c-%c-%c",(int)cVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 0xb4))(local_80);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x74))();
  local_8 = 0xffffffff;
  FUN_004a20f0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

