import React from "react";
import { ToastContainer } from "react-toastify";
import 'react-toastify/dist/ReactToastify.css';

import backButton from "../../../../image/Arrow Back button.png";
import eye from '../../../../image/LoginScrren/eye.svg';
import eyeSlash from '../../../../image/LoginScrren/eyeSlash.svg';

const LoginAsWaiterJSX = ({ handleForm, historyGoBack, handleShowPassword, showOpenEye }) => {
  return (
    <div
      className="max-w-[700px] mx-auto h-screen  rounded-lg relative overflow-hidden   justify-center cursor-pointer">

      <div className="text-center font-bold text-2xl shadow-md bg-white py-2 text-blue-600">
        <button onClick={() => historyGoBack()}>
          <img
            src={backButton}
            className="absolute left-2 h-8 top-3 border-none"
            alt="logo"
          />
        </button>
        Log In Waiter
      </div>
      <form method="POST" onSubmit={(e) => handleForm(e)} className='py-40 px-2'>

        <div className="flex flex-row py-3">
          <span className="text-left w-56">UserName & Email</span>
          <input
            type="text"
            placeholder="Email or Phone Number"
            className=" w-full rounded-lg  py-3 px-5 bg-[#eaedf0] ml-4 "
            name="waiterEmail"
          />
        </div>
        <div className="flex flex-row py-3">
          <span className="text-left w-56"> Password</span>
          <input
            type="password"
            placeholder="Password"
            className=" w-full rounded-lg  py-3 px-5 bg-[#eaedf0] ml-4"
            name="waiterPassword"
            id="showData"

          />

          {/* TODO: eye  is not working */}
          <div className="absolute  right-2 pr-3 mt-4  items-center font-extrabold focus:placeholder-gray-500">
            <button className="">
              <img src={
                showOpenEye ? eye : eyeSlash
              }
                alt=""
                className="text-gray-700 h-5 text-2xl font-extrabold"
                onClick={handleShowPassword} />

            </button>
          </div>
        </div>
        <button
          type="submit"
          className=" w-full rounded-lg text-white font-bold py-3 px-5 mt-8 bg-[#4690da] text-center "
        >
          Login
        </button>

      </form >


      {/* <div className="text-center p-3 mt-72">
        <Link to="#" className=" text-blue-600 underline underline-offset-1">
          {/* forgot Password? 
        </Link>
      </div> */}

    </div >
  );
};

export default LoginAsWaiterJSX;
