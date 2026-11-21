// FUN_00618330  00618330

void * FUN_00618330(char *param_1,int param_2,uint *param_3,char *param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  void *_Dst;
  short *psVar6;
  short sVar7;
  int local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char local_c;
  
  *param_3 = 0;
  local_18 = param_1 + param_2;
  if ((((param_5 == 0x80) || (param_5 == 0x82)) || (param_5 == 0x84)) || (param_5 == 0x88)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    local_18 = local_18 + param_2 * 3;
  }
  local_10 = &DAT_015ede10;
  do {
    do {
      while( true ) {
        while( true ) {
          pcVar4 = param_1;
          if (local_18 <= param_1) {
            *param_3 = (uint)(local_10 + -0x15ede10);
            _Dst = operator_new(*param_3);
            memcpy(_Dst,&DAT_015ede10,*param_3);
            return _Dst;
          }
          sVar7 = 1;
          iVar5 = FUN_00617b70(param_1,param_4,param_5);
          if (iVar5 == 0) break;
          if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          pcVar4 = param_1 + 1;
          if (bVar1) {
            pcVar4 = param_1 + 4;
          }
          param_1 = pcVar4;
          if (param_4 != (char *)0x0) {
            param_4 = param_4 + 1;
          }
          while ((param_1 < local_18 && (iVar5 = FUN_00617b70(param_1,param_4,param_5), iVar5 != 0))
                ) {
            if ((param_5 == 0x80) || (((param_5 == 0x82 || (param_5 == 0x84)) || (param_5 == 0x88)))
               ) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            pcVar4 = param_1 + 1;
            if (bVar1) {
              pcVar4 = param_1 + 4;
            }
            param_1 = pcVar4;
            if (param_4 != (char *)0x0) {
              param_4 = param_4 + 1;
            }
            sVar7 = sVar7 + 1;
          }
          *local_10 = '\x01';
          *(short *)(local_10 + 1) = sVar7;
          local_10 = local_10 + 3;
        }
        iVar5 = FUN_00617cf0(param_1,param_4);
        if (iVar5 == 0) break;
        if ((((param_5 == 0x80) || (param_5 == 0x82)) || (param_5 == 0x84)) || (param_5 == 0x88)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          *local_10 = -0x7c;
        }
        else {
          *local_10 = '\x04';
        }
        psVar6 = (short *)(local_10 + 1);
        local_10 = local_10 + 3;
        local_1c = 0;
        while( true ) {
          if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88))))
          {
            bVar2 = 1;
          }
          else {
            bVar2 = 0;
          }
          if ((int)((-(uint)bVar2 & 2) + 1) <= local_1c) break;
          *local_10 = *param_1;
          local_10 = local_10 + 1;
          param_1 = param_1 + 1;
          local_1c = local_1c + 1;
        }
        if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          param_1 = param_1 + 1;
        }
        *local_10 = *param_4;
        while( true ) {
          local_10 = local_10 + 1;
          param_4 = param_4 + 1;
          if ((local_18 <= param_1) || (iVar5 = FUN_00617cf0(param_1,param_4), iVar5 == 0)) break;
          local_1c = 0;
          while( true ) {
            if ((((param_5 == 0x80) || (param_5 == 0x82)) || (param_5 == 0x84)) || (param_5 == 0x88)
               ) {
              bVar2 = 1;
            }
            else {
              bVar2 = 0;
            }
            if ((int)((-(uint)bVar2 & 2) + 1) <= local_1c) break;
            *local_10 = *param_1;
            local_10 = local_10 + 1;
            param_1 = param_1 + 1;
            local_1c = local_1c + 1;
          }
          if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            param_1 = param_1 + 1;
          }
          *local_10 = *param_4;
          sVar7 = sVar7 + 1;
        }
        local_c = (char)sVar7;
        *(char *)psVar6 = local_c;
        *psVar6 = sVar7;
      }
      iVar5 = FUN_00617c30(param_1,param_4,param_5);
    } while (iVar5 == 0);
    switch(param_5) {
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x20:
    case 0x40:
      *local_10 = (char)param_5;
      psVar6 = (short *)(local_10 + 1);
      local_10[3] = *param_1;
      local_10 = local_10 + 4;
      param_1 = param_1 + 1;
      if (param_4 != (char *)0x0) {
        param_4 = param_4 + 1;
      }
      while ((param_1 < local_18 && (iVar5 = FUN_00617c30(param_1,param_4,0), iVar5 != 0))) {
        *local_10 = *param_1;
        local_10 = local_10 + 1;
        param_1 = param_1 + 1;
        if (param_4 != (char *)0x0) {
          param_4 = param_4 + 1;
        }
        sVar7 = sVar7 + 1;
      }
      local_c = (char)sVar7;
      *(char *)psVar6 = local_c;
      *psVar6 = sVar7;
      break;
    default:
      iVar5 = FUN_00617d20(param_1,param_4,local_18,param_5);
      if (iVar5 == 0) {
        if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          *local_10 = -0x7e;
        }
        else {
          *local_10 = '\x02';
        }
        psVar6 = (short *)(local_10 + 1);
        local_10 = local_10 + 3;
        local_1c = 0;
        while( true ) {
          if ((((param_5 == 0x80) || (param_5 == 0x82)) || (param_5 == 0x84)) || (param_5 == 0x88))
          {
            bVar2 = 1;
          }
          else {
            bVar2 = 0;
          }
          if ((int)((-(uint)bVar2 & 2) + 1) <= local_1c) break;
          *local_10 = *param_1;
          local_10 = local_10 + 1;
          param_1 = param_1 + 1;
          local_1c = local_1c + 1;
        }
        if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          param_1 = param_1 + 1;
        }
        if (param_4 != (char *)0x0) {
          param_4 = param_4 + 1;
        }
        while (((param_1 < local_18 && (iVar5 = FUN_00617c30(param_1,param_4,param_5), iVar5 != 0))
               && (iVar5 = FUN_00617d20(param_1,param_4,local_18,param_5), iVar5 == 0))) {
          local_1c = 0;
          while( true ) {
            if ((((param_5 == 0x80) || (param_5 == 0x82)) || (param_5 == 0x84)) || (param_5 == 0x88)
               ) {
              bVar2 = 1;
            }
            else {
              bVar2 = 0;
            }
            if ((int)((-(uint)bVar2 & 2) + 1) <= local_1c) break;
            *local_10 = *param_1;
            local_10 = local_10 + 1;
            param_1 = param_1 + 1;
            local_1c = local_1c + 1;
          }
          if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            param_1 = param_1 + 1;
          }
          if (param_4 != (char *)0x0) {
            param_4 = param_4 + 1;
          }
          sVar7 = sVar7 + 1;
        }
        local_c = (char)sVar7;
        *(char *)psVar6 = local_c;
        *psVar6 = sVar7;
      }
      else {
        if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          *local_10 = -0x78;
        }
        else {
          *local_10 = '\b';
        }
        local_14 = param_1;
        if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        pcVar3 = param_1 + 1;
        if (bVar1) {
          pcVar3 = param_1 + 4;
        }
        param_1 = pcVar3;
        if (param_4 != (char *)0x0) {
          param_4 = param_4 + 1;
        }
        while ((param_1 < local_18 && (*param_1 == *pcVar4))) {
          if ((param_5 == 0x80) || (((param_5 == 0x82 || (param_5 == 0x84)) || (param_5 == 0x88))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (((bVar1) && ((param_1[1] != pcVar4[1] || (param_1[2] != pcVar4[2])))) ||
             (iVar5 = FUN_00617c30(param_1,param_4,param_5), iVar5 == 0)) break;
          if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88))))
          {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          pcVar3 = param_1 + 1;
          if (bVar1) {
            pcVar3 = param_1 + 4;
          }
          param_1 = pcVar3;
          if (param_4 != (char *)0x0) {
            param_4 = param_4 + 1;
          }
          sVar7 = sVar7 + 1;
        }
        *(short *)(local_10 + 1) = sVar7;
        local_10 = local_10 + 3;
        local_1c = 0;
        while( true ) {
          if ((((param_5 == 0x80) || (param_5 == 0x82)) || (param_5 == 0x84)) || (param_5 == 0x88))
          {
            bVar2 = 1;
          }
          else {
            bVar2 = 0;
          }
          if ((int)((-(uint)bVar2 & 2) + 1) <= local_1c) break;
          *local_10 = *local_14;
          local_10 = local_10 + 1;
          local_14 = local_14 + 1;
          local_1c = local_1c + 1;
        }
        if (((param_5 == 0x80) || (param_5 == 0x82)) || ((param_5 == 0x84 || (param_5 == 0x88)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          param_1 = param_1 + 1;
        }
      }
    }
  } while( true );
}

