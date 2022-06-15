  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 78;
      section.data(78)  = dumData; %prealloc
      
	  ;% rtP.GyrosPID_D
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.pitchPID1_D
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.RepulsorliftPID_D
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.GyrosPID_I
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.RepulsorliftPID_I
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.pitchPID1_I
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.GyrosPID_InitialConditionForFilter
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.forwardPID_InitialConditionForFilter
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.pitchPID1_InitialConditionForFilter
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.pitchPID_InitialConditionForFilter
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.yawPID_InitialConditionForFilter
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtP.RepulsorliftPID_InitialConditionForFilter
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtP.GyrosPID_InitialConditionForIntegrator
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtP.forwardPID_InitialConditionForIntegrator
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtP.pitchPID1_InitialConditionForIntegrator
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtP.pitchPID_InitialConditionForIntegrator
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtP.yawPID_InitialConditionForIntegrator
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtP.RepulsorliftPID_InitialConditionForIntegrator
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtP.GyrosPID_N
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtP.pitchPID1_N
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtP.RepulsorliftPID_N
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtP.GyrosPID_P
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtP.pitchPID1_P
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtP.RepulsorliftPID_P
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtP.Lykyhatkk1_Y0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtP.Bbar_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtP.Qbar_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 97;
	
	  ;% rtP.Rbar_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 241;
	
	  ;% rtP.deltax_Y0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 277;
	
	  ;% rtP.Integrator_IC
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 278;
	
	  ;% rtP.RateTransition2_InitialCondition
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 279;
	
	  ;% rtP.IC_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 280;
	
	  ;% rtP.Saturation_UpperSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 286;
	
	  ;% rtP.Saturation_LowerSat
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 287;
	
	  ;% rtP.Saturation1_UpperSat
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 288;
	
	  ;% rtP.Saturation1_LowerSat
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 289;
	
	  ;% rtP.scalinggain_Gain
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 290;
	
	  ;% rtP.linearposeintegrater_IC
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 291;
	
	  ;% rtP.scalinggain_Gain_jupury5wlc
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 297;
	
	  ;% rtP.Gain_Gain
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 298;
	
	  ;% rtP.IC1_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 299;
	
	  ;% rtP.Switch_Threshold
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 305;
	
	  ;% rtP.Saturation_UpperSat_c14ofn1jjf
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 306;
	
	  ;% rtP.Saturation_LowerSat_hrg0ktoepw
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 307;
	
	  ;% rtP.Gain1_Gain
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 308;
	
	  ;% rtP.Switch_Threshold_djsbgwglvj
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 309;
	
	  ;% rtP.finalgain_Gain
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 310;
	
	  ;% rtP.Gain_Gain_dndn2znysv
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 311;
	
	  ;% rtP.Saturation_UpperSat_onxkxwe4f4
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 312;
	
	  ;% rtP.Saturation_LowerSat_oxbf5pkgup
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 313;
	
	  ;% rtP.Gain_Gain_fcqolhm04o
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 314;
	
	  ;% rtP.angularvelocityintegrater_IC
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 315;
	
	  ;% rtP.DataStoreMemory_InitialValue
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 321;
	
	  ;% rtP.Constant_Value
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 322;
	
	  ;% rtP.Constant_Value_p1gsoflfkl
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 323;
	
	  ;% rtP.directionalconstrain_Value
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 324;
	
	  ;% rtP.P0_Value
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 330;
	
	  ;% rtP.X0_Value
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 474;
	
	  ;% rtP.directionalconstrain_Value_dkx1fe5fvu
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 486;
	
	  ;% rtP.Kd_Value
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 492;
	
	  ;% rtP.Ki_Value
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 493;
	
	  ;% rtP.Kp_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 494;
	
	  ;% rtP.N_Value
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 495;
	
	  ;% rtP.Constant_Value_bg0wdissww
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 496;
	
	  ;% rtP.Constant2_Value
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 497;
	
	  ;% rtP.Constant_Value_imyedfi3jl
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 498;
	
	  ;% rtP.Constant2_Value_hk3avlia0e
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 499;
	
	  ;% rtP.Constant3_Value
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 500;
	
	  ;% rtP.initialgain_Value
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 501;
	
	  ;% rtP.gainscaling_Gain
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 502;
	
	  ;% rtP.selectionmatrix_Value
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 503;
	
	  ;% rtP.thrustmatrix_Value
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 515;
	
	  ;% rtP.Constant_Value_bjebkj0g0c
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 539;
	
	  ;% rtP.masskg_Value
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 545;
	
	  ;% rtP.innertiakgm2_Value
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 546;
	
	  ;% rtP.directionalconstrain_Value_bemiwsq1ta
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 555;
	
	  ;% rtP.Constant_Value_ok5wcdghto
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 561;
	
	  ;% rtP.Gain_Gain_flo45vukkm
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 567;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.Enable_Value
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.isSqrtUsed_Value
	  section.data(2).logicalSrcIdx = 79;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 44;
      section.data(44)  = dumData; %prealloc
      
	  ;% rtB.b3mb05k43e
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.hxwp4pp2vw
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 12;
	
	  ;% rtB.mlfgrwy0vh
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 18;
	
	  ;% rtB.ecgwuotvgr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 24;
	
	  ;% rtB.pcbagnzchm
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 30;
	
	  ;% rtB.gut2rdh4at
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 36;
	
	  ;% rtB.cmg5lcy35n
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 37;
	
	  ;% rtB.b33ayb4udb
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 38;
	
	  ;% rtB.gx53sbrfe2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 39;
	
	  ;% rtB.ebkydsk0r2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 40;
	
	  ;% rtB.bxcypv55tm
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 46;
	
	  ;% rtB.hvwc1pvt1x
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 52;
	
	  ;% rtB.jtc3cuors3
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 53;
	
	  ;% rtB.g513sj0mdc
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 59;
	
	  ;% rtB.mnwxpzx3lu
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 60;
	
	  ;% rtB.gx2sxhuagj
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 61;
	
	  ;% rtB.mao5cuyexx
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% rtB.hsrcc0wrus
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 63;
	
	  ;% rtB.fbfaby5zgo
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 64;
	
	  ;% rtB.mwtoyjgicn
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 65;
	
	  ;% rtB.g3wfsmzd40
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 66;
	
	  ;% rtB.lpzww2w4t4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 70;
	
	  ;% rtB.joz0jerjx5
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 71;
	
	  ;% rtB.pbhd3ebigk
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 83;
	
	  ;% rtB.npkf4jvhmc
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 95;
	
	  ;% rtB.m13v3tzjvr
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 96;
	
	  ;% rtB.hgnhmbw1ey
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 97;
	
	  ;% rtB.kelpqvssw3
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 98;
	
	  ;% rtB.l1p2rzuxov
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 99;
	
	  ;% rtB.h03fxlsmaz
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 100;
	
	  ;% rtB.c22d1mz0mp
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 101;
	
	  ;% rtB.gjsiilr2qy
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 107;
	
	  ;% rtB.od5pa1hb51
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 113;
	
	  ;% rtB.opuaimzh5g
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 115;
	
	  ;% rtB.hkthjp0hwn
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 117;
	
	  ;% rtB.efxu1t2ca5
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 123;
	
	  ;% rtB.abn2o32zty
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 124;
	
	  ;% rtB.id54yto2nt
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 130;
	
	  ;% rtB.pnipjtlxdg
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 136;
	
	  ;% rtB.ge0blvxvmu
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 137;
	
	  ;% rtB.fyjipolnqh
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 140;
	
	  ;% rtB.ek4aiuqc1q
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 146;
	
	  ;% rtB.lleulw554r
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 158;
	
	  ;% rtB.jsl5x2irnt
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 170;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.mvxqg1s3mg
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.mmrthbmx33
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 144;
	
	  ;% rtDW.pl5ipvhaac
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 156;
	
	  ;% rtDW.miz1bl3z5w
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 168;
	
	  ;% rtDW.cnj5pialzd
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 174;
	
	  ;% rtDW.b51bgum1oo
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 180;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.ke4f005qyf.LoggedData
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nf54ksspgo.LoggedData
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.kiu4ryrenn
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.i5ledh1vq3
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fft0rbdmuo
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.bhdaoyxpxq
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 4;
	
	  ;% rtDW.ejs0vs2amv
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 5;
	
	  ;% rtDW.g0l0bbckkp
	  section.data(6).logicalSrcIdx = 13;
	  section.data(6).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtDW.f2qhiy1twx
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hjw5xpsugz
	  section.data(2).logicalSrcIdx = 15;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.a02qvwrxmu
	  section.data(3).logicalSrcIdx = 16;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.hiudrndel0
	  section.data(4).logicalSrcIdx = 17;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.hrkn2z2xmi
	  section.data(5).logicalSrcIdx = 18;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.dyann5lzea
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.lel1glznxf
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.ltisa2m2wd
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.md3ol40n3j
	  section.data(2).logicalSrcIdx = 22;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cztv4wdtac
	  section.data(3).logicalSrcIdx = 23;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.olcb4lv2yx
	  section.data(4).logicalSrcIdx = 24;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.h0pdguc1c3
	  section.data(5).logicalSrcIdx = 25;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.pvze4nq3ec
	  section.data(6).logicalSrcIdx = 26;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.l5qqunsqzq
	  section.data(7).logicalSrcIdx = 27;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ejyd0yr2bi
	  section.data(8).logicalSrcIdx = 28;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2399090089;
  targMap.checksum1 = 4253358139;
  targMap.checksum2 = 2103209435;
  targMap.checksum3 = 1421672948;

