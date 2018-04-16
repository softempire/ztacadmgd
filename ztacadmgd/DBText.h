// (C) Copyright 2005-2007 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.

//-----------------------------------------------------------------------------
//- DBText.h
#pragma once
//#include "Entity.h"

//-----------------------------------------------------------------------------
using namespace System ;
using namespace Autodesk::AutoCAD::Geometry ;
using namespace Autodesk::AutoCAD::DatabaseServices ;

//-----------------------------------------------------------------------------
//- Wizard Generated Custom Object .NET Wrapper
//- See the mgPoly in the ObjectARX SDK for further information
//-----------------------------------------------------------------------------
namespace ztAcadMgd {
	namespace DatabaseServices {

		/// <summary>  
		/// ��������
		/// </summary> 
		[Autodesk::AutoCAD::Runtime::Wrapper("AcDbText")]
		public ref class DBText : public Autodesk::AutoCAD::DatabaseServices::Entity {

		public:
			//- Constructor
			DBText () ;

		internal:
			DBText (System::IntPtr unmanagedPointer, bool bAutoDelete) ;

			//- Returns the unmanaged ARX Object
			inline AcDbText *GetImpObj () {
				return (static_cast<AcDbText *>(UnmanagedObject.ToPointer ())) ;
			}

		public:
			//- To define properties which get/set values of your object
			//- the format you must use is
			//-		__property void set_Center(Point2d point);
			//-		__property Point2d get_Center();
			property Point3d AlignmentPoint
			{
				Point3d get();
				void set(Point3d value);
			}
			property double Height
			{
				double get();
				void set(double value);
			}
			[System::ComponentModel::Category("Geometry")]
			property Vector3d Normal
			{
				Vector3d get();
				void set(Vector3d value);
			}
			[System::ComponentModel::Category("Geometry")]
			property double Oblique
			{
				double get();
				void set(double value);
			}
			property Point3d Position
			{
				Point3d get();
				void set(Point3d value);
			}
			property double Rotation
			{
				double get();
				void set(double value);
			}
			property String^ TextString
			{
				String^ get();
				void set(String^ value);
			}
			property Autodesk::AutoCAD::DatabaseServices::ObjectId^ TextStyle
			{
				 Autodesk::AutoCAD::DatabaseServices::ObjectId^ get();
				void set(Autodesk::AutoCAD::DatabaseServices::ObjectId^ value);
			}
			property double Thickness
			{
				double get();
				void set(double value);
			}
			/*property TextVerticalMode VerticalMode
			{
				TextVerticalMode get();
				void set(TextVerticalMode value);
			}*/
			property double WidthFactor
			{
				double get();
				void set(double value);
			}
		} ;

	}
}