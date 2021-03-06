//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TileTrackMuFeature_p1_h
#define TileTrackMuFeature_p1_h
class TileTrackMuFeature_p1;

#include "TPObjRef.h"

class TileTrackMuFeature_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   float       m_PtTR_Trk;    //
   float       m_EtaTR_Trk;    //
   float       m_PhiTR_Trk;    //
   int         m_Typ_IDTrk;    //
   TPObjRef    m_TileMu;       //
   TPObjRef    m_Track;        //

   TileTrackMuFeature_p1();
   TileTrackMuFeature_p1(const TileTrackMuFeature_p1 & );
   virtual ~TileTrackMuFeature_p1();

};
#endif
